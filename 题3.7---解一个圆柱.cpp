#include<stdio.h>
#include<math.h>
int main()
{
	float r,h,c,v;
	scanf("%f%f",&r,&h);
	c=2*3.14*r*r+2*3.14*r*h;
	v=3.14*r*r*h;
	printf("Բ�������Ϊ%6.2f\nԲ�����Ϊ%6.2f",c,v);
	return 0;
 } 
