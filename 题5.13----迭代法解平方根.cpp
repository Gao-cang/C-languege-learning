#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,a;
	printf("a=");
	scanf("%f",&a);
	x=1;
	y=2;
	do
	{
		y=x;		
		x=(y+a/y)/2;
	}
	while(fabs(x-y)>1e-5);	
	printf("a的二次方根为%8.4f",x);
	return 0;
}
 
