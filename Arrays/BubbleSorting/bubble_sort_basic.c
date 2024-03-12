#include<stdio.h>

void bubble_sort(int a[], int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[] = {2, 5, 6, 1, 3};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, size);
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}