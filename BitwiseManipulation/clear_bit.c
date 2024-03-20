#include<stdio.h>


int clear_bit(int a, int pos)
{
	a&=~(1<<pos);
	return a;
}
int main()
{
	int a=15, pos=0;
	printf("%d", clear_bit(a, pos));
	return 0;
}