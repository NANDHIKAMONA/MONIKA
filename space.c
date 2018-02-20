#include <stdio.h>
#include<string.h>
void main()
 {
	char a[100]="mohana priya";
	int i,count=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count+1);
}
