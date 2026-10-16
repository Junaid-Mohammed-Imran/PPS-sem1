#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter any three numbers :\n");
    scanf("%d %d %d", &a,&b,&c );

    if(a>b && a>c){
        printf("The number %d is graterest among three",a);
    }
    else if (b>c && b>a){
        printf("The number %d is graterest among three",b);
    }
    else
        printf("The number %d is graterest among three",c);
    return 0;
}