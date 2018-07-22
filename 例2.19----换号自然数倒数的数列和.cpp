#include<stdio.h>
int main()
{
	int s=1;
	double d=2.0,sum=1.0,t;
	while(d<=100)
	{
		s=-s;
		t=s/d;
		sum=sum+t;
		d=d+1;
	}
	printf("%f\n",sum);
	return 0;
 } 
