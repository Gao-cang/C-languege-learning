#include<stdio.h>
int main()
{
	int max,row,colum,i,j;
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
	max=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				row=i;
				colum=j;
			}
		}
	}
	printf("MAX=%d\nROW=%d\nCOLUM=%d\n",max,row,colum);
	return 0;
}
