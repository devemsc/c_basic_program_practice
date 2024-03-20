/*Not Working still 
1
3 2 
4 5 6 
10 9 8 7 
11 12 13 14 15*/


#include<stdio.h>

void call(int a)
{
    int count, hold;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                hold=j*2+i-1;
                for(int k=hold;k>=1&&hold>0;k--)
                {
                    printf("%d", k);
                    hold--;
                }
            }else
            {
                printf("%d ", i-j+1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int a=5;
    call(a);
    return 0;
}