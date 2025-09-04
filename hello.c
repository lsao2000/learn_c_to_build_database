// // #include <stdio.h>
// int main(void) {
//
//   return 0;
// }
#include <stdio.h>

int main() {
    int x = 10;        // Normal integer variable
    int *ptr = &x;     // Pointer variable storing address of x

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of ptr: %p\n", ptr);
    printf("Value at address stored in ptr: %d\n", *ptr);

    return 0;
}
