#include<stdio.h>
#include<string.h>

int count_vow(char *str)
{
	int count;
	while(str[i]!='\0')
	{
	  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
	  {
	  count++;
	  }
	}
	return count;
}
int main()
{
	char name[] = "charan";
	int number;
	number = count_vow(name);
	printf("The vowels in the string is %d", number);
	return 0;
}
