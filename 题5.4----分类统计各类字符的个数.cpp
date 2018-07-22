#include<stdio.h>
int main()
{
	int e=0,n=0,s=0,o=0; 
	printf("please enter:");
	char c;
	while(c!='\n')
	{
		c=getchar();
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
	e=e+1;
	else if(c>='0'&&c<='9')
	n=n+1;
	else if(c==' ')
	s=s+1;
	else
	o=o+1;
	}
	printf("%d of English Symbol\n",e);
	printf("%d of Number Symbol\n",n);
	printf("%d of Space Symbol\n",s);
	printf("%d of Others Symbol\n",o);
	return 0;
}
