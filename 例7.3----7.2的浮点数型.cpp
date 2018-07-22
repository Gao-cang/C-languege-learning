#include<stdio.h>
int main()
{
	float max(float x,float y); 
	float a,b,c;
	printf("please enter two number:\n");
	scanf("%f %f",&a,&b);
	c=max(a,b);
	printf("max is %f",c);
	return 0;
 }

float max(float x,float y)
{
	float z;
	z=x>y? x:y;
	return(z);
}
