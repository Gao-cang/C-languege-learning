#include<stdio.h>
#include<math.h>
int main()
{
	double a,fa,ga;
	a=1.5;
	do
	{
		fa=2*a*a*a-4*a*a+3*a-6;
		ga=6*a*a-8*a+3;
		a=a-fa/ga;
	}
	while(fabs(fa)>1e-6);
	printf("x=%6.2f",a);
	return 0;
}
