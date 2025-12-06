#include <stdio.h>
int main()
{
    int n,ones,tens,h,r;
    printf("Enter a three-digit Number:");
    scanf("%d",&n);
    ones = n%10;
    tens = (n / 10) % 10;
    h = n / 100;
    r = (ones * 100) + (tens * 10) + h;
    printf("Result = %d",r);
}