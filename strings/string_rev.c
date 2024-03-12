#include<stdio.h>
#include<string.h>

void str_rev(char *str)
{
	int start = 0;
	int end = strlen(str)-1;
	while(start<end)
	{
		char temp=str[start];
		str[start]=str[end];
		str[end]=temp;
	}
}
int main()
{
	char *name = "charan";
	str_rev(name);
	printf("%s", name);
	return 0;
}