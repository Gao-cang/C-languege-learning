#include<stdio.h>
int main()
{
	int a[10],i,j,t,k;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		k=i;
		for(j=i;j<10;j++)/*a[i]开始后面每个数分别与板凳数比较*/
		{
			if(a[j]<a[k])
			{
				t=a[j];
				a[j]=a[k];
				a[k]=t;/*与每个数比较并交换后，a[k]是最小的那个数*/
			}
		}
	}
	printf("从小到大排序为：\n");
	for(k=0;k<10;k++)
	{
		printf("%d ",a[k]);
	 } 
	 return 0;
}
