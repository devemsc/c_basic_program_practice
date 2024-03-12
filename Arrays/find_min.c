#include<stdio.h>

int find_min(int a[], int len)
{
    int min=a[0];
    for(int i=0;i<len;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}

int main()
{
    int a[]={3, 4, 8, 2, 9};
    int size = sizeof(a)/sizeof(a[0]);
    printf("%d", find_min(a, size));
    return 0;
}