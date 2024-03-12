#include<stdio.h>

int find_max(int a[], int len)
{
    int max=a[0];
    for(int i=0;i<len;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int a[]={3, 4, 8, 2, 9};
    int size = sizeof(a)/sizeof(a[0]);
    printf("%d", find_max(a, size));
    return 0;
}