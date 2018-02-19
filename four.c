#include <stdio.h>
int main(void)
{
	int n;
	int i=2;
	printf("enter the value");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i==n)
		{
		    	i=i*2;
			printf("power hte value%d",i);
      }
      i=i*2;
	}
	return 0;
}
