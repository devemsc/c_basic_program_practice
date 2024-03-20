#include<stdio.h>


int checkOddorEven(int num)
{
    if(num&1)
    {
        return 0;
    }else
    {
        return 1;
    }
}
int main()
{
    int a=14;
    printf("%d", checkOddorEven(a));
    return 0;
}