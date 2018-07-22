#include<stdio.h>
int main()
{
	int a,b,t;
	scanf("%d %d",&a,&b);
    do
	{
		t=a%b;
		a=b;
		b=t;
	}
    while(t>0);
	printf("最大公约数为%d",a);
	return 0;
 } 
