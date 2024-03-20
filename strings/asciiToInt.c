#include<stdio.h>


int AsciiToInt(char *str)
{
    int sign=1;
    int result;
    if(*str=='-')
    {
        sign=-1;
    }
    while(*str!='\0')
    {
        if(*str>='0'&&*str<='9')
        {
            result = result*10+(*str-'0');
        }else
        {
            printf("Invalid");
        }
        str++;
    }
    result=result*sign;
    return result;
}
int main()
{
    char *str = "123";
    int ans = AsciiToInt(str);
    printf("%d", ans);
    return 0;
}
