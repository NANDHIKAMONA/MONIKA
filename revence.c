#include <stdio.h>
#include<string.h>
int main()
{
	char b[50];
	int i,count=1;
	printf("enter the character");
	scanf("%d",&b[i]);
	gets(b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i] == '.')
		count++;
		}
	printf("%d",count);
	return 0;
}
