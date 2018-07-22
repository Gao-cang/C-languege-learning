#include<stdio.h>
int main()
{
	int a,b,c,x,y;
	printf("水仙花数有\n"); 

	for(a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			for(c=0;c<=9;c++)
			{	
				x=a*a*a+b*b*b+c*c*c;
	            y=a*100+b*10+c;
				if(x==y)
				printf("%d\n",x);
			}
		}
	}
	return 0;
}
