#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the value for x: ");
    scanf("%d", &x);
    
    printf("Enter the value for y: ");
    scanf("%d", &y);

    printf("The Bitwise for AND (x & y) = %d\n", x & y);
    printf("The Bitwise for OR  (x | y) = %d\n", x | y);
    printf("The Bitwise for XOR (x ^ y) = %d\n", x ^ y);
    printf("The Bitwise for NOT (~x) = %d\n", ~x);
    printf("The Bitwise for NOT (~y) = %d\n", ~y);
    printf("The Bitwise for Left Shift (x<<1) = %d\n", x << 1);
    printf("The Bitwise for Right Shift (x>>1)= %d\n", x >> 1);

    return 0;
}
