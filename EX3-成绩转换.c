#include <stdio.h>
int main(){
	int mark;
	scanf("%d",&mark);
	if (mark<60)
		printf("E");
	else if (mark<70)
		printf("D");
	else if (mark<80)
		printf("C");
	else if (mark<90)
		printf("B");
	else
		printf("A");
	return 0;
}
