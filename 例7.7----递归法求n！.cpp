#include<stdio.h>
int series(int n)
{
	if(n>1)
	n=series(n-1)*n;
 }
 int main()
 {
 	int series(int n);
 	int n;
	scanf("%d",&n);
	printf("%d! = ",n);
	if(n==0)
	printf("0");
	else if(n==1)
	printf("1");
	else
	printf("%d",series(n));
	return 0;
 }
