#include<stdio.h>
int main()
{
	int max(int x,int y);
	int a,b,c;
	printf("please enter two interger number:\n");
	scanf("%d %d",&a,&b);
	c=max(a,b);
	printf("max is %d",c);
	
	return 0;
}
int max(int x,int y)
{
	int z;
	z=x>y? x:y;
	return (z);
}
