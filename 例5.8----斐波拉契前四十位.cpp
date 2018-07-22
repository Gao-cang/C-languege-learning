#include<stdio.h>
int main()
{
	int a,b,c,n;
	a=0,b=1,n=0;
	printf("%d\n",b);
	for(;n<=40;n++)
	{
		c=a+b; 
		printf("%d\n",c);
        a=b;
		b=c;
	}
	return 0;
}
