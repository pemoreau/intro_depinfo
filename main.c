#include <stdio.h>
#include "point.h"

int main() {
  Point* p1 = creer_point(5,12);
  printf("Ceci est un Point(x=%d,y=%d)\n",p1->x,p1->y);
}
