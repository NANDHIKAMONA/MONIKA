#include <stdio.h>
int main() 
{
	int i,m;
	char a[10];
	printf("enter tha number");
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		printf("\t%c",a[i]);
	}
	return 0;
}
