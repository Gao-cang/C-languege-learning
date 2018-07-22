#include<stdio.h>
int main()
{
	int s,x=0,y=0,z=0,i,k,n;
	for(i=1;i<=100;i++)
	{
		x=x+i;
	}
	for(k=1;k<=50;k++)
	{
		y=y+k*k;
	}
	for(n=1;n<=10;n++)
	{
		z=z+1/n;
	}
	s=x+y+z;
	printf("S=%d",s);
	return 0;
}
