#include<stdio.h>
int main()
{
	int year,leap;
	printf("enter year:");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||(year%400==0))	
	    leap=1;	 
	else
	    leap=0;
	if(leap)
	    printf("%d是闰年",year);
	else
	    printf("%d不是闰年",year);
	return 0;
}
