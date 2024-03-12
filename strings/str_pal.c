#include<stdio.h>
#include<string.h>

int str_pal(char *str)
{
    int i=0, var;
    int j=strlen(str)-1;
    while(*str!='\0')
    {
        if(str[i]==str[j])
        {
            var=1;
        }
        i++;
        j--;
        str++;
    }
    return var;
}
int main()
{
    int val = str_pal("charan");
    printf("%d", val);
    return 0;
}