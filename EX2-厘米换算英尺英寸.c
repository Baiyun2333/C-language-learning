#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	b = a/30.48;
	c = (a/30.48-b) * 12;
	printf("%d %d",b,c);
}
