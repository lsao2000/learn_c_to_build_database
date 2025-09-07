
#include <stdio.h>
int sum(int number) {
  static int count = 0;
  count += number;
  return count;
}

int main(int argc, char *argv[]) {
  int lstNumbers[] = {39, 92, 20, 39, 11, 92};
  // To count the sum of list numbers we can use this.

  int i = 0;
  while (i < (sizeof(lstNumbers) / sizeof(lstNumbers[0]))) {
    sum(lstNumbers[i]);
    i++;
  }
  printf("sum of list numbers is: %d\n", sum(0));
  return 0;
}
