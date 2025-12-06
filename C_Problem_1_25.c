#include <stdio.h>

int main()
{
    int n,res;
    printf("Enter a 3-digit Number:");
    scanf("%d",&n);
    res = (n / 100) + ((n / 10) % 10) + (n % 10);
    while (res >= 10){
        res = (res / 10) + (res % 10);
    }
    printf("Final Result = %d",res);
}