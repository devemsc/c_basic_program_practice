#include<stdio.h>


int checkOddEven(int num)
{
    if((num^1)==(num+1))
    {
        return 1;
    }else
    {
        return 0;
    }
}
int main()
{
    int a=41;
    printf("%d", checkOddEven(a));
    return 0;
}