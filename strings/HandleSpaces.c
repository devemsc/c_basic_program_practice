#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool IsValid(char s)
{
    return (s>='a' && s<='z') ||
    (s>='A' && s<='Z') ||
    (s>='0' && s<='9');
}
int HandleSpaces(char *name)
{
    int count=0;
    int len = strlen(name);
    for(int i=0;i<len;i++)
    {
        while(!IsValid(name[i]))
        {
            i++;
        }
        count++;
    }
    return count;
}
int main()
{
    char *sen = "Test   @1234";
    printf("%d", HandleSpaces(sen));
    return 0;
}