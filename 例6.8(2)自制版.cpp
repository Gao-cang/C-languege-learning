#include<stdio.h>
int main()
{
	char str[81];
	int i,num=0,word=0;
	char c;
	gets(str);
	for(i=0;(c=str[i])!='\0';i++)
	{
		if(c==' ')
		{
			word=0;
		}
		else 
		{			
			if(word==0)
			{
				num=num+1;
			}
			word=1;
		}
	}
	printf("ÓÐ%d¸öµ¥´Ê",num);
	return 0;
 } 
