#include <stdio.h>
int main(){
	int day,type,num;
	scanf("%d",&day);
	num = day % 3;
  switch (num) {
  	case 1:
  		type = 1;
		break;
	case 2:
  		type = 1;
		break;
	case 0:
  		type = 2;
		break;				
  }
  if (type == 2)
	printf("Fishing in day %d",day);
  else
	printf("Drying in day %d",day);
  return 0;
} 
