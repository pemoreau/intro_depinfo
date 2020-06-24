#include<stdlib.h>
#include "point.h"

Point* creer_point(int x, int y) {
  Point* res = (Point*) malloc(sizeof(Point));
  res->x = x;
  res->y = y;
  return res;
}
