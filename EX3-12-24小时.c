#include <stdio.h>
int main(){
	int h,m,nh;
	scanf("%d:%d",&h,&m);
	if (h==24)
	h = 0;
	if (h < 12)
		printf("%d:%d AM",h,m);
	else{
		if(h==12)
			nh = h;
		else
			nh = h - 12;
		printf("%d:%d PM",nh,m);
}
	return 0;
}
