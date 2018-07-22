#include<stdio.h>
int main()
{
	void sort(int array[],int n);
	int a[10],i;
	printf("enter array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,10);
	printf("The sorted array:\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
 }

void sort(int array[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)//依次以数组中每个数为目标，即每个“目标数” 
	{
		k=i;//记录目标数的下标，k——这一趟中最小那个数的下标，则有最小数array[k] 
		for(j=i+1;j<n;j++)//依次对于后续每个数，即每个“后续数” 
		{
			if(array[j]<array[k])//若后续数比最小数小 
			{
				k=j;//记录下那个数的下标，同时最小数array[k]也改变了 
			}
		}
		t=array[k];array[k]=array[i];array[i]=t;//将“后续数”和“目标数”的值交换 
	}
}
