#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
void selection_sort(int a[], int len)
{
    int min;
    for(int i=0;i<len-1;i++)
    {
        min=i;
        for(int j=i+1;j<len;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(&a[min], &a[i]);
    }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main()
{
    int a[] = {8, 5, 6, 1, 3};
    int len=sizeof(a)/sizeof(a[0]);
    selection_sort(a, len);
    printArray(a, len);
    return 0;
}