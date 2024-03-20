#include<stdio.h>

int add(int a, int b)
{
    int carry;
    while(b!=0)
    {
        carry=a&b;
        a=a^b;
        b=carry<<1;
    }
    return a;
}
int main()
{
    int a=3, b=4;
    printf("%d", add(a, b));
    return 0;
}#i