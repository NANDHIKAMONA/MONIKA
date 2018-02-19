#include<stdio.h>
void main()
{
    int a,b,t;
    printf("enter the value of a");
    scanf("%d",&a);
     printf("enter the value of b");
    scanf("%d",&b);
    printf(" value of a and b before swaping%d%d",a,b);
    t=a;
    a=b;
    b=t;
    printf("value of a and b after swaping%d%d",a,b);
}
