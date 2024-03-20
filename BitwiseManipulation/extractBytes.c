#include<stdio.h>
#include<stdint.h>

void extractBytes(int num)
{
    uint32_t byte;
    for(int i=0;i<sizeof(num);i++)
    {
        byte = num>>(8*i)&0xFF;
        printf("Byte: %u\n", byte);
    }
}
int main()
{
    int a=384;
    extractBytes(a);
    return 0;
}