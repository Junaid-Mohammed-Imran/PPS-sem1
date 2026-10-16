#include <stdio.h>

int main(){
    int n,m;
    printf("Enter your starting number\n");
    scanf("%d",&n);
    printf("Enter your ending number\n");
    scanf("%d",&m);

    for(int i=n; i<=m ; i++){
        if(i%2==0){
            printf("the value of i is : %d\n",i);
        }
    }
    return 0;
}