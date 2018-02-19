#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
     printf("enter the value of b");
    scanf("%d",&b);
    printf(" value of a and b before swaping%d%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("value of a and b after swaping%d%d",a,b);
}
