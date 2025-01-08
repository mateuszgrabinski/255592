#include <stdio.h>
int policz(int a, int b) {
    return a*b;
}
int main(void) {
    printf("Hello, World!\n");
    printf("W drugim branchu: %d\n", policz(5, 10));
    return 0;
}
