#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,q,derta,x1,x2;
	printf("a b c 分别为：");
	scanf("%f%f%f",&a,&b,&c);
	derta=b*b-4*a*c;
	p=(-b)/(2*a);
	q=sqrt(derta)/(2*a);
	x1=p+q;
	x2=p-q;
	if(a==0)
	{
		printf("这不是一元二次方程，解为%5.2f",(-c)/b);
	}
	else if(derta>0)
	{
		printf("这个方程有两不等实根:x1=%5.2f\tx2=%5.2f",x1,x2); 
	}
	else if(derta==0)
	{
		printf("这个方程有两相等实根，x1=x2=%6.2f",x1);
	}
	else
	{
		q=sqrt(-derta)/(2*a);
		printf("这个方程无实根,有两复根为:\n");
		printf("x1=%5.2f+%5.2fi\n",p,q);
		printf("x2=%5.2f-%5.2fi\n",p,q);
	}
	return 0;
 } 
