#include <stdio.h>
#include<string.h>
void main() 
{
char a[100];
int i=1,n;
printf("Enter the string");
gets(a);
printf("Enter the number");
scanf("%d",&n);
while(i<=n)
{
printf("%s",a);	
i++;	
}
	
}
