#include<stdio.h>
int main()
{
	float s,x,i;
	s=0,x=100;
	for(i=1;i<=10;i++)
	{
		x=x/2;
		s=s+x*3;
	}
	printf("S=%6.2f\nX=%6.2f",s,x);
	return 0;
}
