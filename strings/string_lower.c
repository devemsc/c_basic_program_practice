#include<stdio.h>
#include<string.h>


char* str_lower(char *str)
{
	while(*str!='\0')
	{
		if(*str>='A'&&*str<='Z')
		{
			*str = *str + ('a'-'A');
		}
		str++;
	}
	return str;
}
int main()
{
	char name[] = "CHARAN";
	str_lower(name);
	printf("%s", name);
	return 0;
}