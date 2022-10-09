//通讯录
//功能：增加、删除、查询、修改
//一个人的通讯录信息：姓名、手机号、关系
#include <stdio.h>
#include <stdlib.h>

typedef struct Person{	
	char name[20];
	int phone;
	char relation[20];
	struct Person *next;	
}Tongxun;

int n;

/*
struct Person * creat(void)
{struct Person * head;
 struct Person *p1,*p2;
 n = 0;
 p1=p2=(struct Person * ) malloc(LEN);
 scanf("%s,%d,%s",&p1->name,&p1->phone,&p1->relation);	//输入第一个人的各项信息 
 head=NULL;
 while(p1->phone!=0)
 {	n++
	if(n==1)head=p1;
	else p2->next=p1;
	p2=p1;
	p1=(struct Person * )malloc(LEN);
	scanf("%s,%d,%s",&p1->name,&p1->phone,&p1->relation);	//输入下一个人的各项信息 
 }
 p2->next=NULL;
 return(head) 
}
*/
void add(struct Person * head){
	Tongxun *pn = (struct Person*)malloc(sizeof(Tongxun));
	pn=head;
//	last = last->next;
	scanf("%20s%d%20s",&pn->name,&pn->phone,&pn->relation);	//输入下一个人的各项信息
	printf("%s,%d,%s\n",pn->name,pn->phone,pn->relation);
}

int main(){
	int a=0;
	struct Person *head = (struct Person*)malloc(sizeof(Tongxun));
	head->next = NULL;
//	struct Person * last=NULL;
	//do{
		
	printf("输入1~4分别可进行通讯录的增加、删除、查询、修改，"
"输入-1则结束程序\n");							//功能使用
	scanf("%d",&a);
	if(a==-1)return 0;
	
	switch(a){
		case 1: add(head);break;
		default:printf("错误的数字\n"); 
	} 
	 
	printf("完成，输入0可重新进行指令输入，输入0以外任意数终止程序");
	
} 
