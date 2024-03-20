#include<stdio.h>
#include<string.h>

char* leftRotate(char *str, int target)
{
    int len=strlen(str);
    int n=target%len;
    for(int i=0;i<n;i++)
    {
        char hold=str[0];
        for(int j=0;j<len-1;j++)
        {
            str[j]=str[j+1];
        }
        str[len-1]=hold;
    }
    return str;
}
int main()
{
    char name[]="charan";
    printf("%s", leftRotate(name, 2));
    return 0;
}