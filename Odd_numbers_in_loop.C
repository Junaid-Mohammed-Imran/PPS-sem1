#include <stdio.h>

int main(){
    int n,m;
    printf("Enter your starting number\n");
    scanf("%d",&n);
    printf("Enter your ending number\n");
    scanf("%d",&m);

    do
    {
        if(n%2!=0){
            printf("The value of n is : %d\n",n);
        }
        n++;
    } while (n<=m);
    
    return 0;
}