#include<stdio.h>
int main()
{
	int a,b,c,d;
	int gcdivisor(int x,int y);
	int lcmultiple(int x,int y);
	printf("please enter two integer number:\n");
	scanf("%d %d",&a,&b);
	c=gcdivisor(a,b);
	d=lcmultiple(a,b);
	printf("the greatest common divisor is:\n");
	printf("the lowest common multiple is:\n");
	return 0;
 }

int gcdivisor(int x,int y)
{
	int z,i=1;
	do
	{
		z=i*x;
		i=i+1;
	}while(z%y==0);
	return (z);
}

int lcmultiple(int x,int y)
{
	int q,z,i;
	for(z=2;z<=x;z++)
	{
		if(x%z==0)
		{
			if(y%z==0)
			{
				q=z;
			}
		}
	} 
	return(q);
}
