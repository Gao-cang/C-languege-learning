#include<stdio.h>
int main()
{
	float r1,r2,r3,r5,r0,p1,p2,p3,p4,p5,q,n;
	r1=0.0414;
	r2=0.0468;
	r3=0.054;
	r5=0.0585;
	r0=0.0072;
	q=1000;
	p1=q*(1+(5*r5));
	p2=q*(1+(2*r2))*(1+(3*r3));
	p3=q*(1+(3*r3))*(1+(2*r2));
	p4=q*(1+r1)*(1+r1)*(1+r1)*(1+r1)*(1+r1);
	n=0;
	while(n<21)
	{
		p5=q*(1+r0);
		n=n+1;
	}
	printf("p1=%f\np2=%f\np3=%f\np4=%f\np5=%f",p1,p2,p3,p4,p5);
	return 0;
}
