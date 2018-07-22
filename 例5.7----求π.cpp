#include<stdio.h>
#include<math.h>
int main()
{
	double p,i,m;
    int n=1,c=0;
	i=1,m=1,p=0;
	while(fabs(i)>=1e-8)
	{
		p=p+i;
		n=n+2;		
		m=-m;
		i=m/n;
		c++;
	}
	p=4*p;
	printf("pai=%10.8lf\n",p);
	printf("‘À––%d¥Œ",c);
	return 0;
}
