#include<stdio.h>
int main()
{
	char a[5][9];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i;j<i+5;j++)
		{
			a[i][j]='*';
		}
		for(j=0;j<i;j++)
		{
			a[i][j]=' ';
		}
		for(j=i+5;j<9;j++)
		{
			a[i][j]=' ';
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<9;j++)
		{
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
