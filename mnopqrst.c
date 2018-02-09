#include<stdio.h>
#include<string.h>
void main()
{
char a[1000];
int m = 0, n= 0, d = 0;
puts("Enter any string\n");
gets(a);
for(m= 0; a[m] !='\0'; m++)
{
n = n + 1;
}
for(m = 0; m <= n-1; m++)
{
if(a[m] == ' ')
{
d = d + 1;
}
}
printf("no. of space in the line %d", d);
}
