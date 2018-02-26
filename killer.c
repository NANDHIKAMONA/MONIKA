#include<stdio.h>
#include<string.h>
int main(){
	char v[20];
	char m[20];
	int l,a,i;
	int sum1=0;
	int sum2=0;
	scanf("%s",v);
	scanf("%s",m);
	 l=strlen(v);
     a=strlen(m);
     for(i=0;i<l;i++)
     {
     	sum1=sum1+v[i];
	 }
	  for(i=0;i<a;i++)
	  {
     	sum2=sum2+m[i];
	 }
	 if(sum1>sum2)
	 {
	 	printf("%s",v);
	 }
	 else
	 {
	 	printf("%s",m);
	 }
}
