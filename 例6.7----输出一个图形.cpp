#include<stdio.h>
int main()
{
	int d[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c",d[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
 } 
