#include <stdio.h>
int addition(int a, int b);
int substraction(int a, int b);

int main() {
  int numbers[] = {3, 39, 393, 93, 1, 0, 14};
  for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++) {
    printf("Number %d: %d\n", i, numbers[i]);
  }
  int *numP = &numbers[0];
  numP[0] = 5;
  numP[0 + 1] = 5;
  numP[0 + 2] = 5;
  numP[0 + 3] = 5;
  numP[0 + 4] = 5;

  for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++) {
    printf("Number %d: %d\n", i, numbers[i]);
  }

  char ca[5];
  ca[0] = 'D';
  ca[1] = 'H';
  ca[2] = 'K';
  ca[3] = 'E';
  ca[4] = 'I';
  printf("%c %c %c %c %c\n", *(ca + 0), *(ca + 1), *(ca + 2), *(ca + 3),
         *(ca + 4));

  return 0;
}
