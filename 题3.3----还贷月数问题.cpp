#include<stdio.h>
#include<math.h>
int main()
{
	float d,p,r,m,a,b,c;
	d=300000;
	p=6000;
	r=0.01;
	a=log(p);
	b=log(p-(d*r));
	c=log(1+r);
	m=(a+b)/c;
	printf("需还%5.1f月还清",m);
	return 0;
	
 } 
