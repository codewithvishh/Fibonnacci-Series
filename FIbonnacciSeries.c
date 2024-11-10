#include<stdio.h>
int main()
{
    int n,start=0,num=1,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        start=num;
        num=sum;
        printf(" %d",sum);
        sum=start+num;
    }
    return 0;
}