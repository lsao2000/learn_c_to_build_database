#include <stdio.h>
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}
int main(int argc, char *argv[]) {
  // int a = 3;
  // // int b = 34;
  // int *a_in_memory = &a;
  // printf("a value is: %d\n", a);
  // printf("a in memory is: %p\n", a_in_memory);
  // a = 193;
  // printf("a value is: %d\n", a);
  // *a_in_memory += 1;
  // printf("a in memory is: %p\n", a_in_memory);
  // printf("a in memory is: %d\n", a);

  // int x = 9, y = 2;
  // int *ip = &x;
  //
  // printf("%d\n", x);
  // printf("%d\n", y);
  // y = *ip;
  // *ip = 3;
  // printf("%d\n", x);
  // printf("%d\n", y);

  int x = 4, y = 6;

  swap(&x, &y);
  printf("x value: %d\n", x);
  printf("y value: %d\n", y);
  return 0;
}
