#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool equal(char *a, char *b);
void countTotalPrice(int prices[], char *items[], char *item, int size);
void printCart(int size);
static int count = 0;
static int TotlalPrice = 0;
static char *cartItems[100];
static int *cartPrices[100];

int main() {
  char item[100];
  int index;
  char addMore[10];
  int prices[] = {30, 20, 10, 50, 40};
  char *items[] = {"Apple", "Banana", "Orange", "Mango", "Grapes"};

  printf("----------Welcome to the shop!-------------\n");

  printf("Items available in the shop are:\n");
  printf("-------------------------------------------\n");
  printf("|      Item         |     Price     |\n");
  printf("-------------------------------------------\n");
  for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
    if (strlen(items[i]) == 6) {
      printf("|      %s       |      %d       |\n", items[i], prices[i]);

    } else {
      printf("|      %s        |      %d       |\n", items[i], prices[i]);
    }
  }
  printf("-------------------------------------------\n");

  printf("Enter what do you want to buy:");
  scanf("%s", item);

  countTotalPrice(prices, items, item, sizeof(prices) / sizeof(prices[0]));
  printf("Do you want to add something else to your cart:");
  scanf("%s", addMore);
  while (strcmp(addMore, "yes") == 0) {
    printf("Enter what do you want to buy:");
    scanf("%s", item);
    countTotalPrice(prices, items, item, sizeof(prices) / sizeof(prices[0]));
    printf("Do you want to add something else to your cart?\n");
    scanf("%s", addMore);
  }
  printCart(count);

  return 0;
}
void printCart(int size) {
  printf("******** Items in your cart ********\n");
  printf("-------------------------------------\n");
  printf("|      Item         |     Price     |\n");
  printf("-------------------------------------\n");
  for (int index = 0; index < size; index++) {
    if (strlen(cartItems[index]) == 6) {
      printf("|      %s       |      %d       |\n", cartItems[index],
             *cartPrices[index]);
      continue;
    } else {
      printf("|      %s        |      %d       |\n", cartItems[index],
             *cartPrices[index]);
      continue;
    }
  }
  printf("-------------------------------------\n");
  printf("|       Total        |    %d      |\n", TotlalPrice);
  printf("-------------------------------------\n");
}

void countTotalPrice(int prices[], char *items[], char *item, int size) {
  for (int index = 0; index < size; index++) {
    bool isEqual = equal(items[index], item);
    if (isEqual) {
      cartItems[count] = items[index];
      cartPrices[count] = &prices[index];
      TotlalPrice += prices[index];
      count++;
      break;
    }
  }
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
