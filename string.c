#include<stdio.h>
void main()
{
    char ch;
    printf("enter the value");
    scanf("%d",&ch);
    if(ch<='0'||ch<='9')
{
    printf("the value is numeric",ch);
}
else
{
    printf("the value is not a numeric",ch);
}
return 0;
}
