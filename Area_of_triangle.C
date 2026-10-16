#include <stdio.h>

int main(){
    int base, height , area ;
    printf("Enter your base : ");
    scanf("%d",&base);

    printf("Enter your height : ");
    scanf("%d",&height);

    area = 0.5 * base * height;

    printf("The area of the triangle is %d",area);
    return 0;
}