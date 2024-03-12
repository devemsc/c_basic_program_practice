#include<stdio.h>
#include<string.h>

char* str_cpy(char *dest, char *src)
{
	while(*src !='\0'){
		*dest++=*src++;
	}	
	dest = '\0';
	return dest;
}
int main()
{
	char name[]="charan";
	char copy[strlen(name)+1];
	str_cpy(copy, name);
	printf("%s", copy);
	return 0;
}