#include <stdio.h>
struct point {
  int x;
  int y;
};
void move(struct point *p);

int main(int argc, char *argv[]) {
  struct point p;
  p.x = 4;
  p.y = 4;
  printf("x: %d\n", p.x);
  printf("y: %d\n", p.y);
  move(&p);
  printf("x: %d\n", p.x);
  printf("y: %d\n", p.y);
  return 0;
}
void move(struct point *p) {
  // (*p).x++;
 //  (*p).y++;
 p->x++;
 p->y++;
}
