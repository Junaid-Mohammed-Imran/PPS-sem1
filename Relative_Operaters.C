#include <stdio.h>

int main() {
    int x ,y ;
    printf("Enter your numbers :");
    scanf("%d %d",&x,&y);

    printf("Comparing x = %d and y = %d:\n", x, y);

    // Equal to
    printf("The value of x is equal to y (x == y): %d\n", x == y);

    // Not equal to
    printf("The value of x is not equal to y (x != y): %d\n", x != y);

    // Greater than
    printf("The value of x is greater then y  (x > b): %d\n", x > y);

    // Less than
    printf("The value of x is less then or equal to y (x < y): %d\n", x < y);

    // Greater than or equal to
    printf("The value of x is greater then or equal to y (x >= y): %d\n", x >= y);

    // Less than or equal to
    printf("The value of x is less than or equal to y  (x <= y): %d\n", x <= y);

    return 0;
}
