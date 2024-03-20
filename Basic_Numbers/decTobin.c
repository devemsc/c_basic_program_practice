#include<stdio.h>


void DecToBin(int num)
{
    int bin[32], i=0;
    if(num==0)
    {
        printf("Invalid");
    }else
    {
        while(num>0)
        {
            bin[i]=num&1;
            i=i+1;
            num>>=1;
        }
        for(int index=i-1;index>=0;index--)
        {
            printf("%d", bin[index]);
        }
    }
}
int main()
{
    int a=15;
    DecToBin(a);
    return 0;
}