#include<stdio.h>
#include<math.h>
int main()
{
	int a,a0,n,i,s,k;
	a=2,a0=2,k=10;
	printf("please enter n= ");
	scanf("%d",&n);
	s=a;
	for(i=2;i<=n;i++)
	{
		a=a+a0*k;
		k=k*10;
		s=s+a;
		printf("a%d=%d\n",i,a);
	 } 
	printf("S=%d",s);
	return 0;
}
