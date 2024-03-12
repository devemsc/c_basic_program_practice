#include<stdio.h>
#include<string.h>

void str_cpy(char *str, char *str2)
{
    while(*str!='\0')
    {
        *str2=*str;
        str++;
        str2++;
    }
    str2='\0';
}
int main()
{
    char *name = "charan";
    char *second;
    str_cpy(name, second);
    printf("%s", second);
    return 0;
}