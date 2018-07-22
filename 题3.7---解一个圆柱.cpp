#include<stdio.h>
#include<math.h>
int main()
{
	float r,h,c,v;
	scanf("%f%f",&r,&h);
	c=2*3.14*r*r+2*3.14*r*h;
	v=3.14*r*r*h;
	printf("圆柱表面积为%6.2f\n圆柱体积为%6.2f",c,v);
	return 0;
 } 
