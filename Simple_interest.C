#include <stdio.h>

int main(){
    float p , t , r ;
    printf("Enter your Principle = \n");
    scanf("%f",&p);
    printf("Enter your Time = \n");
    scanf("%f",&t);
    printf("Enter your rate = \n");
    scanf("%f",&r);

    printf("Your simple interest value is : %f", (p*t*r)/100);
    return 0;
}