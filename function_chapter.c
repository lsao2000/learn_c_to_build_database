#include <stddef.h>
#include <stdio.h>
void print_big(int argument) {
  if (argument > 10) {
    printf("%d is big\n",argument);
  }
}
int main(int argc, char *argv[]) {
  int array[] = {1, 11, 2, 22, 3, 33};
  int i;
  int arrayLength = sizeof(array) / sizeof(array[0]);
  for (i = 0; i < arrayLength; i++) {
    print_big(array[i]);
  }
  return 0;
}
