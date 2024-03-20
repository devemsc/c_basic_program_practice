#include<stdio.h>

int findLeftMostBit(unsigned int num)
{
    unsigned int mask = 1<<(sizeof(unsigned int)-1);

    return num & mask ? 1 : 0;
}
int main()
{
    unsigned int a=8;
    printf("%d", findLeftMostBit(a));
    return 0;
}