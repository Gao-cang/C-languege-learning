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
		for(j=i;j<10;j++)/*a[i]��ʼ����ÿ�����ֱ��������Ƚ�*/
		{
			if(a[j]<a[k])
			{
				t=a[j];
				a[j]=a[k];
				a[k]=t;/*��ÿ�����Ƚϲ�������a[k]����С���Ǹ���*/
			}
		}
	}
	printf("��С��������Ϊ��\n");
	for(k=0;k<10;k++)
	{
		printf("%d ",a[k]);
	 } 
	 return 0;
}
