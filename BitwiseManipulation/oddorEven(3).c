##include<stdio.h>

int OddorEven(int num)
{
    if(num|1>num)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int main()
{
    int a=4;
    printf("%d", OddorEven(a));
    return 0;
}