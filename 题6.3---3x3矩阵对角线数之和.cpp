#include<stdio.h>
int main()
{
	int a[3][3],s,i,j;
	s=0; 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	s=a[0][0]+a[0][2]+a[1][1]+a[2][0]+a[2][2];
	printf("对角线元素之和为%d",s);
	return 0;
}
