#include<stdio.h>
int main()
{
	int x,y;
	printf("ÀûÈó£º");
	scanf("%d",&x);
	if(x<1000000)
	    if(x<600000)
	        if(x<400000)
	            if(x<200000)
	                if(x<100000)
	                y=x*(0.1);
	                else
	                y=(x-100000)*(0.075)+10000;
	            else
	            y=(x-200000)*(0.05)+17500;
	        else
	        y=(x-400000)*(0.03)+27500;
	    else
	    y=(x-600000)*(0.0015)+33500;
	else
	y=(x-1000000)*(0.01)+39500;
	printf("½±½ğ£º%d",y);
	return 0;
 } 
