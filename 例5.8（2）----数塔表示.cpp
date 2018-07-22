#include<stdio.h>
int main()
{
	int a,b,n;
	a=1,b=1;
	for(n=1;n<=20;n++)
	{
		printf("%12d %12d",a,b);
        if(n%2==0)
        printf("\n");
		a=a+b;
		b=b+a;
	}
	return 0;
}
