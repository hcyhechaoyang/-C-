#include<stdio.h>
int main()
{
	double a,b,c,max;
	printf("please input 3 number:"); 
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	if(c>max)
	{
		max=c;
	}
	printf("max=%f",max);
	return 0;
}
