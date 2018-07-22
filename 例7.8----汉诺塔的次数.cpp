#include<stdio.h>
int main()
{
	int func(int n);
	int n,t;
	printf("How many tiers are there?\nTIERS:");
	scanf("%d",&n);
	t=func(n);
	printf("It will take %d times to complete it.",t);
	return 0;
 }

int func(int n)
{
	int t;
	if(n==1)
	{
		t=1;
	}
	else
	{
		t=2*func(n-1)+1;
	}
		return(t);
}
