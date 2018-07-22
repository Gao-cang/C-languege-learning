#include<stdio.h>
int main()
{
	float sum(float x,float y);
	float a,b,c;
	printf("please enter two number:\n");
	scanf("%f %f",&a,&b);
	c=sum(a,b);
	printf("%5.2f +%5.2f =%5.2f",a,b,c);
	return 0;
}

float sum(float x,float y)
{
	float z;
	z=x+y;
	return(z);
}
