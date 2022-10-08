#include <stdio.h>
	int check(int,int,int,int*);
	void draw(int,int,int,int*); 
	
	int main(){
		int year,month,day;
		int rday[] = {31,28,31,30,31,30,31,31,30,31,30,31};
		int a = -1;
		while(a!=1){
		while(a!=1 && a!=0){ 					//用户输入指令 
		printf("输入0开始输入日期，输入1退出\n");
		    scanf("%d",&a);
		    }
		if(a==0){
		printf("开始输入日期，格式如：2022.10.7\n");
		scanf("%d.%d.%d",&year,&month,&day);	//输入年月日，格式如：2022.10.7
		if(check(year,month,day,rday))
		printf("输入的日期是非法的\n");
		else{
			//printf("通过\n");
			draw(year,month,day,rday);
			}
		a = -1; 								//重新开始输入指令 
	    }
		else{
			break;
		} 
	}
	return 0;
} 

	int check(int year,int month,int day,int *rday){
		int rmonth = 12;
		if(year < 0||month < 0|| day < 0)	//合法性校验：年月日均不为负 
		return 1;
		if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))	//判断是否闰年 
		rday[1] = 29;
		if(month > rmonth)		//合法性校验：月份不能越界 
		return 1;
		if(day > rday[month-1])	//合法性校验：日期不能越界 
		return 1;
		
		return 0;				//通过 
	}
	
	void draw(int year,int month,int day,int *rday){
		{													//画日历头部部分 
			printf("\t%d年   %d月日历\n",year,month);
			printf("\t===================================================\n"); 
		}
		int i;
		for(i=1;i<=rday[month-1];i++){						//画日历日期部分	
			printf("\t%d",i);
			
			if(i==day)										//星号标注对应的“日” 
			printf("*");
			
			if(i%7==0||i==rday[month-1])					//换行 
			printf("\n");
		}
	}
