#include <stdio.h>

int main(){
    int a;
    printf("Enter your number :");
    scanf("%d",&a);

    if(a%2==0){
        printf("The given number is even");
    }
    else 
    printf("The give number is odd");

    return 0;
}