#include<stdio.h>
int main()
{
	char string[81];
	int i,num=0,word=0;//wordΪ0��ǰ�ַ�Ϊ�գ�wordΪ1ʱǰ�ַ���Ϊ�� ����ֵĬ�ϵ�һ���ַ�ǰ��Ϊ�� 
	char c;
	gets(string);
	for(i=0;(c=string[i])!='\0';i++)
	{
		if(c==' ')
		{
			word=0;//������һ���ַ���˵��word=0˵��ǰһ���ǿո񣬼����ַ�Ϊ�գ���wordΪ0 
		}
		else if(word==0)//���ַ���Ϊ��ʱ����ǰ�ַ�Ϊ�գ����µĵ��ʿ�ʼ�� 
		{
			word=1;//ͬ�����ַ���Ϊ�գ����ַ���wordΪ1 
			num++;//�µĵ��ʿ�ʼ�ˣ�num+1 
		}
	}//num��¼�˳����˶��ٴΡ��µ��ʿ�ʼ�� 
	printf("There are %d words in this line.\n",num);
	return 0;
}
