#include<stdio.h>


char* str_upper(char *str)
{
	while(*str!='\0')
	{
		if(*str>='a'&&*str<='z')
		{
			*str = *str - ('a'-'A');
		}
		str++;
	}
	return str;
}
int main()
{
	char name[] = "charan";
	str_upper(name);
	printf("%s", name);
	return 0;
}	