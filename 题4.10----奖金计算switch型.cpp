#include<stdio.h>
int main()
{
	int c,i;
	float k,p,d,q;
	printf("please enter profit:");
	scanf("%d",&i);
	if(i>1000000)
	    c=10;
	else c=i/100000;	
	switch(c)
	{
		case 0: d=0,k=0.1;break;
		case 1: d=10000,k=0.075,c=1;break;
		case 2:
		case 3: d=17500,k=0.05,c=2;break;
		case 4:
		case 5: d=27500,k=0.03,c=4;break;
		case 6:
		case 7:
		case 8:
		case 9: d=33500,k=0.015,c=6;break;
		case 10: d=39500,k=0.01,c=10;break;
	}
	q=i-100000*c;
	p=q*k+d;
	printf("prize:%8.2f\n",p);
	return 0;
 } 
