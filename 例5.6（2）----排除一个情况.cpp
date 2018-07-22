#include<stdio.h>
int main()
{
	int i,j,n=0;
	for(i=1;i<=4;i++)//i-列 
	  for(j=1;j<=5;j++,n++)//j-行，n-计数变量 
	    {if(n%5==0)//n计数五次 
	    printf("\n");
	    if(i==3&&j==1)break;
		printf("%d\t",i*j);
	    }
	  printf("\n");
	  return 0;
}
