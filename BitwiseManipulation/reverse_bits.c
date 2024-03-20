#include<stdio.h>

unsigned int Rev(unsigned int num)
{
    unsigned int rev=0;
    int bits = sizeof(num)*8;
    for(int i=0;i<bits;i++)
    {
        if((num>>i)&1)
        {
            rev |= 1<<(bits-1-i);
        }
    }
    return rev;
}
int main()
{
    unsigned int var=7;
    unsigned int ans = Rev(var);
    printf("%d", ans);
    return 0;
}