#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool equal(char *a, char *b);

int main() {
  char item[100];
  int index;
  int prices[] = {30, 20, 10, 50, 40};
  char *items[] = {"Apple", "Banana", "Orange", "Mango", "Grapes"};

  printf("Enter what do you want to buy:");
  scanf("%s", item);
  for (index = 0; index < sizeof(prices) / sizeof(prices[0]); index++) {
    bool isEqual = equal(items[index], item);
    if (isEqual) {
      printf("The price of %s item is: %d\n", items[index], prices[index]);
      break;
    }
  }
  return 0;
}

bool equal(char *a, char *buyed) {
  bool isEqual = true;
  if (strlen(a) != strlen(buyed)) {
    isEqual = false;
    return isEqual;
  } else {
    for (int i = 0; i < strlen(a); i++) {
      if (a[i] != buyed[i]) {
        isEqual = false;
        // break;
        return isEqual;
      }
    }
    return isEqual;
  }
}
