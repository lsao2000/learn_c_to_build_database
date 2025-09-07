#include <stdio.h>
#include <string.h>
// int main() {
int main(int argc, char *argv[]) {
  // int comparison = strncmp(firstName, lastName, 6);
  // switch (comparison) {
  // case 0:
  //   printf("they are the same string\n");
  //   break;
  // default:
  //   printf("they are not the same\n");
  //   break;
  // }

  // you cant concatenate between two pointers like this
  // char *firstName = "boblslsi";
  // char *lastName = "waterson";
  // char *fullname = strncat(firstName, lastName, 8);
  // this will cause error called : Segmentation fault because the "boblslsi"
  // are stored in read-only memory and you cannot modify them soo the best
  // solution is to try the code below.

  char firstName[] = "boblslsi";
  char lastName[] = "waterson";
  char *fullName = strncat(firstName, lastName, 8);
  printf("%s\n", fullName);
  return 0;
}
