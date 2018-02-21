#include<stdio.h>
void main()
{
    int a,n,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("the result is %d",sum);
}
