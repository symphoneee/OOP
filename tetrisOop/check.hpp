

#include "playfield.hpp"

bool check() {
  for (int i = 0; i < 4; i++)
    if (a[i].x < 0 || a[i].x >= N || a[i].y >= M)
      return 0;
    else if (field[a[i].y][a[i].x])
      return 0;

  return 1;
};