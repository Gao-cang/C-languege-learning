#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,fa,fb,t,ft;
	a=-10,b=10;
	while(fabs(a-b)>1e-5)
	{
		fa=2*a*a*a-4*a*a+3*a-6;
		fb=2*b*b*b-4*b*b+3*b-6;
		t=(a+b)/2;
		ft=2*t*t*t-4*t*t+3*t-6;
		if(fa*ft<0){b=t;}
		else{a=t;}
	}
	printf("x=%6.2f",a);
	return 0;
}
