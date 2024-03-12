#include<stdio.h>


int len(char *str)
{
    int count;
    while(*str!='\0')
    {
        count++;
      str++;
    }
    return count;
}
int main()
{
    char name[] ="Embedded Software Engineer";
    int number = len(name);
    printf("%d", number);
    return 0;
}