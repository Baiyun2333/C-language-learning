#include <stdio.h>
int main(){
	int a,num,index,i,j,h;
	scanf("%d",&a);
    for(index = 0;index < 24;){
    	for(i = 0;i < 4;++i){
    		for(j = 0;j < 4;++j){
    			for(h = 0;h < 4;++h){
    				if(h!=j && i!=h && i!=j){
    				num = (a+i)*100 + (a+j)*10 + (a+h);
					printf("%d",num);
					index++;
					if (index % 6 != 0)
					printf(" ");
					else
					printf("\n");	
						}
					}

			}
		}
	}
	return 0;
} 
