#include <stdio.h>
	int check(int,int,int,int*);
	void draw(int,int,int,int*); 
	
	int main(){
		int year,month,day;
		int rday[] = {31,28,31,30,31,30,31,31,30,31,30,31};
		int a = -1;
		while(a!=1){
		while(a!=1 && a!=0){ 					//�û�����ָ�� 
		printf("����0��ʼ�������ڣ�����1�˳�\n");
		    scanf("%d",&a);
		    }
		if(a==0){
		printf("��ʼ�������ڣ���ʽ�磺2022.10.7\n");
		scanf("%d.%d.%d",&year,&month,&day);	//���������գ���ʽ�磺2022.10.7
		if(check(year,month,day,rday))
		printf("����������ǷǷ���\n");
		else{
			//printf("ͨ��\n");
			draw(year,month,day,rday);
			}
		a = -1; 								//���¿�ʼ����ָ�� 
	    }
		else{
			break;
		} 
	}
	return 0;
} 

	int check(int year,int month,int day,int *rday){
		int rmonth = 12;
		if(year < 0||month < 0|| day < 0)	//�Ϸ���У�飺�����վ���Ϊ�� 
		return 1;
		if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))	//�ж��Ƿ����� 
		rday[1] = 29;
		if(month > rmonth)		//�Ϸ���У�飺�·ݲ���Խ�� 
		return 1;
		if(day > rday[month-1])	//�Ϸ���У�飺���ڲ���Խ�� 
		return 1;
		
		return 0;				//ͨ�� 
	}
	
	void draw(int year,int month,int day,int *rday){
		{													//������ͷ������ 
			printf("\t%d��   %d������\n",year,month);
			printf("\t===================================================\n"); 
		}
		int i;
		for(i=1;i<=rday[month-1];i++){						//���������ڲ���	
			printf("\t%d",i);
			
			if(i==day)										//�Ǻű�ע��Ӧ�ġ��ա� 
			printf("*");
			
			if(i%7==0||i==rday[month-1])					//���� 
			printf("\n");
		}
	}
