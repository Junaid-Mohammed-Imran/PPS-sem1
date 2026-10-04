#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	
    char *names[] = { "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" };
    
    for (int n =a ; n <= b ; n++){
        if (n <= 9)
            printf("%s\n", names[n - 1]);
        else if (n%2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
     
    

    return 0;
}

