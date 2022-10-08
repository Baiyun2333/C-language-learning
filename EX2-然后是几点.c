#include<stdio.h>
int main()
{
	int t1,minute,t2;
	scanf("%d %d",&t1,&minute);	
	t2 = t1 / 100 * 60 + t1 % 100 + minute;
	int h = t2 / 60,m = t2 % 60;
	printf("%d",h * 100 + m);
	return 0;
}
