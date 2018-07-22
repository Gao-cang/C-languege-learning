#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("请输入小于1000的正整数：");
	scanf("%d",&a);
	if(a>0&&a<1000)
	{
        b=sqrt(a);
		printf("这个数的平方根（向左取整）为%d",b); 
	 } 
	else
	{
		printf("请正确输入");
	}
	return 0;
}
