#include<stdio.h>
#include<math.h>
int main()
{
	int s,a,i,k;
	s=0;
	a=1;
	for(i=1;i<=20;i++)
	{
		for(k=1;k<=i;k++)
		{
			a=a*k;
		}
		s=s+a;
	}
	printf("S=%d",s);
	return 0;
}
