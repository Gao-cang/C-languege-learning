#include<stdio.h>
#include<stdbool.h>
int main()
{
	int year;
	bool leap;
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			leap=true;
			else
			leap=false;
		}
		else
		leap=true;
	}
	else
	leap=false;
	if(leap==true)
	printf("%d是闰年",year);
	else
	printf("%d不是闰年",year);
	return 0;
 } 
