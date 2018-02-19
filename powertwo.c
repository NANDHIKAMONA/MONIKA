#include <stdio.h>
int main(void)
{
	int n,i=2;
	printf("enter the value");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i==n)
		{
			printf("yes it is power of 2");
		}
		i=i*2;
	}
	return 0;
}
