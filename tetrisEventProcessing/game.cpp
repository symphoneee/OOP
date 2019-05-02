
#include "game.hpp"
#include "point.hpp"
#include "check.hpp"

#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;


struct event {
  virtual void closeGame() {}
  virtual void resizeGame(sf::Event::SizeEvent) {}

  virtual void on_mouse_button_press(sf::Event::MouseButtonEvent) {}
  virtual void on_mouse_button_release(sf::Event::MouseButtonEvent) {}
  virtual void on_key_press(sf::Event::KeyEvent) {}
  virtual void on_key _release(sf::Event::KeyEvent) {}

  }

struct eventTetris {
  event(sf::Window& w) : window(&w) { }

  void listen(eventTetris& l) {
    listeners.push_back(&l);
  }

  void inform() {
    sf::Event e;
    while (window->pollEvent(e))
      process(e);
  }

  void controlTetris(sf::Event const& e) {
    switch (e.type) {
    case Event::Closed:
      return notify([e](eventTetris* e) { e->on_close(); });
    case Event::Resized:
      return notify([e](eventTetris* e) { e->on_resize(l.size); });
    case Event::MouseButtonPressed:
      return notify([e](eventTetris* e) { e->on_mouse_button_press(e.mouseButton); });
    case Event::MouseButtonReleased:
      return notify([e](eventTetris* e) { e->on_mouse_button_release(e.mouseButton); });
    case Event::KeyPressed:
      return notify([e](eventTetris* e) { e->on_key_press(l.key); });
    case Event::KeyReleased:
      return notify([e](eventTetris* e) { e->on_key_press(l.key); });
    default:
      break;
    }
  }

  template<typename T> void notify(T t) {
    for (eventTetris* e : list)
      t(e);    
  }

  sf::Window* window;
  std::vector<eventTetris*> list;
};

struct debugFind : eventTetris {
  debugFind(tetrisNew& t) : app(&t) { }
  
  void closeTetris() override { std::cerr << " game closing...\n";}

  void on_mouse_button_press(sf::Event::MouseButtonEvent e) override {}
  void on_mouse_button_release(sf::Event::MouseButtonEvent e) override {}

  *eventTetris t;
};


void Tetris::play(){
	  srand(time(0));

  RenderWindow window(VideoMode(320, 480), "The Game!");

  Texture t1, t2, t3;
  t1.loadFromFile("../images/tiles.png");
  t2.loadFromFile("../images/background.png");
  t3.loadFromFile("../images/frame.png");

  Sprite s(t1), background(t2), frame(t3);

  int dx = 0;
  bool rotate = 0;
  int colorNum = 1;
  float timer = 0, delay = 0.3;

  Clock clock;

  while (window.isOpen()) {
    float time = clock.getElapsedTime().asSeconds();
    clock.restart();
    timer += time;

    Event e;
    while (window.pollEvent(e)) {
      if (e.type == Event::Closed)
        window.close();

      if (e.type == Event::KeyPressed) {
        if (e.key.code == Keyboard::Up)
          rotate = true;
        else if (e.key.code == Keyboard::Left)
          dx = -1;
        else if (e.key.code == Keyboard::Right)
          dx = 1;
      }
    }

    if (Keyboard::isKeyPressed(Keyboard::Down))
      delay = 0.05;

    //// <- Move -> ///
    for (int i = 0; i < 4; i++) {
      b[i] = a[i];
      a[i].x += dx;
    }
    if (!check())
      for (int i = 0; i < 4; i++)
        a[i] = b[i];

    //////Rotate//////
    if (rotate) {
      Point p = a[1]; // center of rotation
      for (int i = 0; i < 4; i++) {
        int x = a[i].y - p.y;
        int y = a[i].x - p.x;
        a[i].x = p.x - x;
        a[i].y = p.y + y;
      }
      if (!check())
        for (int i = 0; i < 4; i++)
          a[i] = b[i];
    }

    ///////Tick//////
    if (timer > delay) {
      for (int i = 0; i < 4; i++) {
        b[i] = a[i];
        a[i].y += 1;
      }

      if (!check()) {
        for (int i = 0; i < 4; i++)
          field[b[i].y][b[i].x] = colorNum;

        colorNum = 1 + rand() % 7;
        int n = rand() % 7;
        for (int i = 0; i < 4; i++) {
          a[i].x = figures[n][i] % 2;
          a[i].y = figures[n][i] / 2;
        }
      }

      timer = 0;
    }

    ///////check lines//////////
    int k = M - 1;
    for (int i = M - 1; i > 0; i--) {
      int count = 0;
      for (int j = 0; j < N; j++) {
        if (field[i][j])
          count++;
        field[k][j] = field[i][j];
      }
      if (count < N)
        k--;
    }

    dx = 0;
    rotate = 0;
    delay = 0.3;

    /////////draw//////////
    window.clear(Color::White);
    window.draw(background);

    for (int i = 0; i < M; i++)
      for (int j = 0; j < N; j++) {
        if (field[i][j] == 0)
          continue;
        s.setTextureRect(IntRect(field[i][j] * 18, 0, 18, 18));
        s.setPosition(j * 18, i * 18);
        s.move(28, 31); // offset
        window.draw(s);
      }

    for (int i = 0; i < 4; i++) {
      s.setTextureRect(IntRect(colorNum * 18, 0, 18, 18));
      s.setPosition(a[i].x * 18, a[i].y * 18);
      s.move(28, 31); // offset
      window.draw(s);
    }

    window.draw(frame);
    window.display();
  }
}