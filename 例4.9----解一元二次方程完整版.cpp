#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,q,derta,x1,x2;
	printf("a b c �ֱ�Ϊ��");
	scanf("%f%f%f",&a,&b,&c);
	derta=b*b-4*a*c;
	p=(-b)/(2*a);
	q=sqrt(derta)/(2*a);
	x1=p+q;
	x2=p-q;
	if(a==0)
	{
		printf("�ⲻ��һԪ���η��̣���Ϊ%5.2f",(-c)/b);
	}
	else if(derta>0)
	{
		printf("���������������ʵ��:x1=%5.2f\tx2=%5.2f",x1,x2); 
	}
	else if(derta==0)
	{
		printf("��������������ʵ����x1=x2=%6.2f",x1);
	}
	else
	{
		q=sqrt(-derta)/(2*a);
		printf("���������ʵ��,��������Ϊ:\n");
		printf("x1=%5.2f+%5.2fi\n",p,q);
		printf("x2=%5.2f-%5.2fi\n",p,q);
	}
	return 0;
 } 
