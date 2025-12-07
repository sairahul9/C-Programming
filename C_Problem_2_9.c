#include <stdio.h>

int main()
{
    int n,u,t;
    printf("Enter a Number:");
    scanf("%d",&n);
    u = n%10;
    t = n/10;
    if (u < t){
        printf("Result = 1");
    }
    else{
        printf("Result = 0");
    }
    
}