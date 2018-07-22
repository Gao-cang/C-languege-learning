#include<stdio.h>
int main()
{
	int s,i;
	s=0,i=1;
	do
	{
		s=s+i;
		i++;
	}
	while(i<=100);
	printf("sum=%d\n",s);
	return 0;
}
