#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	b = a%100;
	c = b%10;
	b -= c;
	d = c*100 + b + a/100;
	printf("%d",d);
	return 0;
 } 
