#include <stdio.h>

int main(){
    //area of rectangle = Length x breath
    int length , breath ;
    printf("Enter your breath : \n");
    scanf("%d",&breath);
    printf("Enter your length : \n");
    scanf("%d",&length);

    printf("The area of the triangle is : %d\n", length*breath);
    return 0;
}