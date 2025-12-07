#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(n < 50){
        printf("Result = 1");
        return 0;
    }
    printf("Result = 0");
    return 0;
}