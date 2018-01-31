#include<stdio.h>
int main()
{
int arr[10],i,j,n,temp,num;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the value one by one");
for(i=0;i<n;i++);
{
scanf("%d",&arr[i]);
}
printf("enter the input arr[i]");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<num;i++)
{
for(j=0;i<(num-i-1);j++)
{
if (arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
printf("sorted array is:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
}
}
}
