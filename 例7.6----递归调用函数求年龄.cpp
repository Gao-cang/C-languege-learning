#include<stdio.h>
int main()
{
	int age(int n);
	printf("age of the fifth student:%d",age(5));
	return 0;
}

int age(int n)
{
	int c;
	if(n==1)
	{
		c=10;
	}
	else
	{
		c=age(n-1)+2;
	}
	return(c);
}
