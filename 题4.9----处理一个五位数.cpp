#include<stdio.h>
int main()
{
	int x,a,b,c,d,e,m,n,o,p,q;
	scanf("%d",&x);
    m=x%10000;
	a=(x-m)/10000;
	n=m%1000;
	b=(m-n)/1000;
	o=n%100;
	c=(n-o)/100;
	p=o%10;
	d=(o-p)/10;
	q=p;
	e=q;
	scanf("这个数是"); 
	if(a==0)
	    if(b==0)
	        if(c==0)
	            if(d==0)
	                if(e==0)
	                printf("0");
	                else printf("1");
	            else printf("2");
	        else printf("3");
	    else printf("4");
	else printf("5");
	printf("位数\n");
	printf("%d%d%d%d%d\n",a,b,c,d,e);
	printf("%d%d%d%d%d\n",e,d,c,b,a);
	return 0;
 } 
