#include<stdio.h>
int main()
{
	int n,i,s;//n:1~1000ÿ����������֤��i:��ÿ��n��ö�ٳ�����������s:��ÿ��n�������������͡� 

	printf("1000֮�ڵ�������:\n");
	for(n=2;n<=1000;n++)//��ѭ��ö��n 
	{
	  	s=0;  
		for(i=1;i<n;i++)//Сѭ��ö��i������ 
	    {
		if(n%i==0)//���Ӽ��ǿ��Ա�n������С��n������ 
		{s=s+i;}
	    }
	if(s==n) 
	{
	printf("%d ",n);
	printf("its factors are ");
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{printf("%d,",i);}
	}
	printf("\b \n");
	}
	}
	return 0;
}
