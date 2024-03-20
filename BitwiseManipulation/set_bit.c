#include<stdio.h>


int set_bit(int num, int pos)
{
    num |= (1<<pos);
    return num;
}
int main()
{
    int a=5, pos=1;
    printf("%d", set_bit(a, pos));
    return 0;
}