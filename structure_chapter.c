
#include <stdio.h>
// typedef struct {
//   int model;
//   char *brand;
// } vehicle;

struct point {
  int x;
  int y;
};

typedef struct {
  struct point pOne;
  struct point pTwo;
  struct point pThree;
  struct point pFour;
} square;

struct point makePoint(int x, int y);
int main(int argc, char *argv[]) {
  square layer;
  struct point firstPoint;
  struct point secondPoint;
  struct point thirdPoint;
  struct point forthPoint;
  // vehicle mercedes;
  // mercedes.model = 2020;
  // mercedes.brand = "mercedes AMG";
  // printf("%s Car model %d\n", mercedes.brand, mercedes.model);

  // firstPoint.x = 3;
  // firstPoint.y = 3;
  // secondPoint.x = -3;
  // secondPoint.y = -3;
  // thirdPoint.x = 3;
  // thirdPoint.y = -3;
  // forthPoint.x = -3;
  // forthPoint.y = 3;
  firstPoint = makePoint(3, 3);
  secondPoint = makePoint(-3, -3);
  thirdPoint = makePoint(3, -3);
  forthPoint = makePoint(-3, 3);

  // This could represent object in 2D space
  layer.pOne = firstPoint;
  layer.pTwo = secondPoint;
  layer.pThree = thirdPoint;
  layer.pFour = forthPoint;

  // struct point p = makePoint(5, 6);
  return 0;
}
struct point makePoint(int x, int y) {
  struct point temp;
  temp.x = x;
  temp.y = y;
  return temp;
};
