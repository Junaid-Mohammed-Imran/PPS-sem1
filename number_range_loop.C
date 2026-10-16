#include <stdio.h>

int main(){
    int n,m ,i;
    printf("Enter your starting number\n");
    scanf("%d",&n);
    printf("Enter your ending number\n");
    scanf("%d",&m);

    while(n<=m){
        printf("The value of i is : %d\n",n);
        n++;
    }
    return 0;
}