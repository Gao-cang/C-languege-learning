#include<stdio.h>
#include<math.h>
int main()
{
	int a[99],i,j;
	printf("100���ڵ������У�\n");
	for(i=0;i<99;i++)
	{
		a[i]=i+2;
	}
	for(i=0;i<99;i++)//��ѭ�������ÿ��Ŀ����
	{
		for(j=0;j<=i-1;j++)//Сѭ����ÿ���������ĳ�����2-Ŀ������ƽ���� �� 
		{
			if(a[i]%a[j]==0)
			break;
		}
		if(j>i-1)
		{
			printf("%d\n",a[i]);
		}
	} 
	return 0;
}
