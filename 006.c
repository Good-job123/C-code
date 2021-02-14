#include<stdio.h>

int main()
{
    int a,s=0,sum=0;
    int n;
    scanf("%d%d",&n,&a);
    while(n--)
    {
        s=s+a;
        printf("%d ",s);
        sum =s+10*sum;
        // n--;
    }
    printf("\n%d",sum);

    return 0;
}