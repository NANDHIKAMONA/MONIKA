#include<stdio.h>
#include<conio.h>
void main()
{
    int a=120,b=150;
    printf("value of 'a' and 'b' before swaping%d%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("value of 'a' and 'b' after swaping%d%d",a,b);
    return 0;
}
