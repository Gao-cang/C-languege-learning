#include<stdio.h>
int main()
{
	int max4(int a,int b,int c,int d);
	printf("please enter four number:\n");
	int a,b,c,d,max;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	max=max4(a,b,c,d);
	printf("max=%d\n",max);
	return 0;
 } 

int max4(int a,int b,int c,int d)
{
	int m;
	int max2(int a,int b);
	m=max2(a,b);
	m=max2(m,c);
	m=max2(m,d);
	return(m);
}

int max2(int a,int b)
{
	if(a>b)
	return(a);
	else
	return(b);
}
