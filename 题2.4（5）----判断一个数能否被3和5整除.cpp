#include<stdio.h>
int main()
{
	int a,r1,r2;
	scanf("%d",&a);
	r1=a%3;
	r2=a%5;
	if(r1==0,r2==0)
	printf("%d能被3和5整除",a);
	else if(r1==0)
	printf("%d能被3整除但不能被5整除",a);
	else if(r2==0)
	printf("%d能被5整除但不能被3整除",a) ;
	else
	printf("%d不能被3和5整除",a);
	return 0;
	
}
