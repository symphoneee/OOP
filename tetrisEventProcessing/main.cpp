
#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;

#include "game.hpp"




int
main()
{
  tetrisEvent t;

  tetrisListener (t);


  eventTetris events(app.window);
  events.listen(t);
  events.listen(debug);


  while (t.is_open()) {
    events.poll();

    t.find_matches();
    t.animate_moves();
    t.draw();
  }

  
}