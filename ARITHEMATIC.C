#include<stdio.h>
int main()
{
int a,d,tn,n,i,sum=0;
printf("enter first term\n");
scanf("%d",&a);
printf("enter common difference\n");
scanf("%d",&d);
printf("enter no.of terms in AP");
scanf("%d",&n);
sum=(n(2a+(n+1)d))\2;
tn=a+(n-1)d;
for(i=a;i<=tn;i=i+d)
{
if(1!=tn)
printf("%d+",i);
else
printf("%d=%d",i,sum);
}
return 0;
]

