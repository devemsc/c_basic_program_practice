#include<stdio.h>


void printDigits(int num)
{
    int rem;
    int digit[10];
    int i=0;
    while(num>0)
    {
        rem=num%10;
        digit[i++]=rem;
        num/=10;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d", digit[j]);
    }
}
int main()
{
    int a=10670;
    printDigits(a);
    return 0;
}