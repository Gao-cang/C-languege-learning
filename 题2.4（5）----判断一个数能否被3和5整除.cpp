#include<stdio.h>
int main()
{
	int a,r1,r2;
	scanf("%d",&a);
	r1=a%3;
	r2=a%5;
	if(r1==0,r2==0)
	printf("%d�ܱ�3��5����",a);
	else if(r1==0)
	printf("%d�ܱ�3���������ܱ�5����",a);
	else if(r2==0)
	printf("%d�ܱ�5���������ܱ�3����",a) ;
	else
	printf("%d���ܱ�3��5����",a);
	return 0;
	
}
