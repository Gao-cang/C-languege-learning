#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("four number:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int m;
	m=a;
	if(b>m)
	    m=b;
	else
	m=m;
	if(c>m)
	    m=c;
	else
	m=m;
	if(d>m)
	    m=d;
	else
	m=m;
	printf("max=%d",m);
return 0;
 } 
