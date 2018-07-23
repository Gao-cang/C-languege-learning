#include<stdio.h>
#include<math.h>
float derta,m,n,x1,x2,a,b,c;
int main()
{
	void solve1();
	void solve2();
	void solve3();
	printf("please enter a,b,c:\n");
	scanf("%f %f %f",&a,&b,&c);
	derta=b*b-4*a*c;
	if(derta>0)
	{
		solve1();
		printf("有两实根");
		printf("x1=%5.2f,x2=%5.2f",x1,x2);
	}
	else if(derta==0)
	{
		solve2();
		printf("有两个相等实根");
		printf("x1=x2=%5.2f",x1); 
	}
	else
	{
		solve3();
		printf("有两复根");
		printf("x1=%5.2f+%5.2fe\n",m,n);
		printf("x2=%5.2f+%5.2fe\n",m,n);
	}
	return 0;
 } 

void solve1()
{
	x1=-b/2*a+sqrt(derta)/2*a;
	x2=-b/2*a-sqrt(derta)/2*a;
}

void solve2()
{
	x1=-b/2*a;
}

void solve3()
{
	m=-b/2*a;
	n=sqrt(-derta)/2*a;
}
