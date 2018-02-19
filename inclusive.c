#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
  if(i==n)
        {
          printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    return 0;
}
