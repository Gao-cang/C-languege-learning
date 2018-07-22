#include<stdio.h>
int main()
{
	int a[11]={1,4,6,9,13,16,19,28,40,100,0};
	int n,i,j,t;
	scanf("%d",&n);
	for(i=0;i<11;i++)
	{
		
		if(n<a[i])
		{
			t=a[i];
			for(j=9;j>i;j--)
			{
				a[j+1]=a[j];		
			}
			a[j+1]=t;
			a[j]=n;
		break;
		}
		if(n>a[9])
		{
		a[10]=n;	
		break;	
		}
			
	}
	printf("NEW STRING IS:\n");
	for(i=0;i<11;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
