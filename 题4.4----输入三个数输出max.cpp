#include<stdio.h>
int main()
{
	float a,b,c,t;
	scanf("%f%f%f",&a,&b,&c);
	if(a>b&&a>c)
	{
		t=a;
	}
	else if(b>a&&b>c)
	{
		t=b;
	}
	else if(c>a&&c>b)
	{
		t=c; 
	}
	printf("最大的数是%f",t);
	return 0;
}
