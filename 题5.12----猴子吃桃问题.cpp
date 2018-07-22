#include<stdio.h>
int main()
{
	int s,i;
	s=1;
	for(i=1;i<=10;i++)
	{
		s=2*(s+1);
	}
	printf("摘下了%d个桃子",s);
	return 0;
 } 
