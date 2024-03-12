#include<stdio.h>
#include<string.h>

int count_con(char *str)
{
	while(*str!='\0')
	{
	   if(*str!='a'||*str!='e'||*str!='i'||*str!='o'||*str!='u')
	  {
	  count++;
	  }
	}
	return count;
}
int main()
{
	char name[] = "secunderabad";
	int number = count_con(name);
	printf("%d", number);
	return 0;
}