#include<stdio.h>
int main() 
{
	float r,p,n;
	r=0.09;
	p=1;
	while(n<11)
	{
	p=p*(1+r);
	n=n+1;
	}
	printf("10��������ڵ�%6.2f��",p);
	return 0;
}
