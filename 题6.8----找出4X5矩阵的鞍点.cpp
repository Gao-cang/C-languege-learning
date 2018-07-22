#include<stdio.h>
int main()
{
	int a[4][5],maxj,i,n,j,max,flag=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("鞍点:\n");
	for(i=0;i<4;i++)
	{
		max=a[i][0];
		j=0;
		for(j=1;j<5;j++)
		{
			if(max<a[i][j])//如果后一个数比max大，将其记录于max，j记录maxj
			{max=a[i][j];
			maxj=j;}
		}
		for(n=0;n<4;n++)
		{
			if(max>a[n][maxj])
			break;
		}
		if(n==4)
		{
			flag=1;
			printf("a[%d][%d]=%d ",n,maxj,max);
		}
	}
	if(flag==0)
	{
		printf("不存在"); 
	}
	return 0;
}
