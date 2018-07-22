#include<stdio.h>
int main()
{
	int i,t;
	float s,f,a,b; 
	s=0;
	a=1,b=2;
	for(i=1;i<=20;i++)
	{
		f=b/a;
		s=s+f;
		t=b;
		b=a+b;
		a=t;
	}
	printf("S=%6.2f",s);
	return 0;
}
