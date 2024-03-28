#include<stdio.h>

/*basic code for creating the bubble sorting*/

static void BubbleSort(int a[], int size);
static void PrintArray(int a[], int len);
static void swap(int a, int b);

int main()
{

}

void BubbleSort(int a[], int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j], a[j+1]);
			}
		}
	}
}

void PrintArray(int a[], int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ", a[i]);
	}
}
void swap(int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
}