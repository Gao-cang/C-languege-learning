#include<stdio.h>
int main()
{
	int a,b,t,n;
	scanf("%d %d",&a,&b);
    n=1,t=1;
    while(t!=0)
	{
		if(n*a>=b)
        t=(n*a)%b;
		n=n+1;
	}
	a=a*(n-1);
	printf("最小公倍数为%d,n=%d,t=%d",a,n,t);
	return 0;
 } 
