#include<stdio.h>
int main()
{
	char string[81];
	int i,num=0,word=0;//word为0则前字符为空，word为1时前字符不为空 ，初值默认第一个字符前面为空 
	char c;
	gets(string);
	for(i=0;(c=string[i])!='\0';i++)
	{
		if(c==' ')
		{
			word=0;//对于下一个字符来说，word=0说明前一个是空格，即此字符为空，则赋word为0 
		}
		else if(word==0)//此字符不为空时，且前字符为空，则新的单词开始了 
		{
			word=1;//同理，此字符不为空，下字符的word为1 
			num++;//新的单词开始了，num+1 
		}
	}//num记录了出现了多少次“新单词开始” 
	printf("There are %d words in this line.\n",num);
	return 0;
}
