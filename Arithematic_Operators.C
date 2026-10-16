#include <stdio.h>

int main(){
    int a,b;
    printf("Enter your first number :\n");
    scanf("%d",&a);
    printf("Enter your second number :\n");
    scanf("%d",&b);

    printf("ARITHEMATIC OPERATORS\n");

    // + - * / % 

    //addition
    printf("The addition of two number is : %d\n",a+b);

    //subtraction
    printf("The subtraction of two number is : %d\n",a-b);

    //multiplication 
    printf("The multiplication of two number is : %d\n",a*b);

    //Division
    printf("The division of two number is : %d\n",a-b);
    
    //remainder
     printf("The remainder of two number is : %d\n",a%b);
    return 0;
}