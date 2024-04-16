#include<stdio.h>
#include<stdlib.h>

void billD(int bCount, int a[], int k, int b)
{
    int sum=0;
    for(int i=0;i<bCount;i++)
    {
        sum+=a[i];
       // c=sum-a[k];
    }
    int c=(sum-a[k])/2;
    int split = sum/2;
    if(split==b)
    {
        printf("Anna is overcharged with %d\n", c);
    }else
    {
        printf("Bon appetit\n");
    }
}
int main()
{
    int n, k, b;
    printf("Enter the items ordered: \n");
    scanf("%d", &n);
    printf("Enter the Anna did not eat\n");
    scanf("%d", &k);
    printf("Enter the Anna prices: \n");
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
        printf("Enter the Anna amount to be paid\n");
    scanf("%d", &b);
    billD(n, a, k, b);
    return 0;
}