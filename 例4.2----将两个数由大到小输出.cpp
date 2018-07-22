#include<stdio.h>
int main()
{
	float a,b,t;
	scanf("%f%f",&a,&b);
	if(a<b)
	{
		t=a;
		a=b;
		b=a;
	}
	printf("%5.2f\t%5.2f",a,b);
	return 0;
 } 
