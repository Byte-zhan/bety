#include<stdio.h>
int main()
{
	int a=5;
	const int b=123;
	const int *pt;
	pt=&a;
	*(pt+)=1;
	printf("%d",a);
	printf("%d",*pt);
	return 0;

}
