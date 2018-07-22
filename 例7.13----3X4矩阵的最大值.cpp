#include<stdio.h>
int main()
{
	int max(int array[][4]);
	int m;
	int a[3][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}};
	m=max(a);
	printf("Max is %d",m);
	return 0;
 }

int max(int array[][4])
{
	int i,j,max;
	max=array[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(max<array[i][j])
			{
				max=array[i][j];
			}
		}
	}
	return(max);
}
