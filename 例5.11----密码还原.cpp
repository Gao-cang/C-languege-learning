#include<stdio.h>
int main()
{
	char c;
	c=getchar();
	while(c!='\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			if(c>='A'&&c<='D'||c>='a'&&c<='d')
			c=c+22;
			else c=c-4;
		}
		printf("%c",c);
		c=getchar();
	}
	printf("\n");
	return 0;
}
