#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("������С��1000����������");
	scanf("%d",&a);
	if(a>0&&a<1000)
	{
        b=sqrt(a);
		printf("�������ƽ����������ȡ����Ϊ%d",b); 
	 } 
	else
	{
		printf("����ȷ����");
	}
	return 0;
}
