#include<stdio.h>
int main()
{
	int max(int a,int b,int c);
	int a,b,c,m;
	scanf("%d,%d,%d",&a,&b,&c);
	m=max(a,b,c);
	printf("最大的数是%d\n",m);
	return 0;
	
}
int max(int a,int b,int c)
{
	int m;
	if(a>b)m=a;
	else m=b;
	if(m>c)m=m;
	else m=c;
	return(m);
}
