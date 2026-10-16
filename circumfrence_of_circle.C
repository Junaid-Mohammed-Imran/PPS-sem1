#include <stdio.h>

int main(){
    float r,cir;
    printf("Enter your radius:\n");
    scanf("%f",&r);

    cir = 2 * 3.14 * r * r ;
    printf("The circumfrence of the circle is : %f" , cir);
    return 0;
}