#include <stdio.h>

int main()
{
    int n,f,l;
    printf("Enter a 4-digit Number:");
    scanf("%d",&n);
    f = n/100;
    l = n%100;
    if (f == l){
        printf("Result = 1");
    }
    else{
        printf("Result = 0");
    }
    
}