//ͨѶ¼
//���ܣ����ӡ�ɾ������ѯ���޸�
//һ���˵�ͨѶ¼��Ϣ���������ֻ��š���ϵ
#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Person)
void add(void);
struct Person
{	char name[20];
	int phone;
	char relation[20];
	struct Person *next;	
} 
int n;
struct Person * creat(void)
{struct Person * head;
 struct Person *p1,*p2;
 n = 0;
 p1=p2=(struct Person * ) malloc(LEN);
 scanf("%s,%d,%s",&p1->name,&p1->phone,&p1->relation);	//�����һ���˵ĸ�����Ϣ 
 head=NULL;
 while(p1->phone!=0)
 {	n++
	if(n==1)head=p1;
	else p2->next=p1;
	p2=p1;
	p1=(struct Person * )malloc(LEN);
	scanf("%s,%d,%s",&p1->name,&p1->phone,&p1->relation);	//������һ���˵ĸ�����Ϣ 
 }
 p2->next=NULL;
 return(head) 
}

void add(){
	scanf("%s,%d,%s",&p1->name,&p1->phone,&p1->relation);	//������һ���˵ĸ�����Ϣ 
}

int main(){
	int a=0;
	struct Person * h 
	printf("��ӭʹ��ͨѶ¼�����������ͨѶ¼�ĳ�ʼ����¼�������ֻ���Ϊ0���ɽ�����ʼ��")
	h = creat(); 
	do{
		
	printf("����1~4�ֱ�ɽ���ͨѶ¼�����ӡ�ɾ������ѯ���޸ģ�"
"����-1���������\n")							//����ʹ��
	scanf("%d",&a);
	if(a==-1)
	return 0;
	
	switch(a){
		case 1: add();break;
		default:printf("���������\n"); 
	} 
	 
	printf("��ɣ�����0�����½���ָ�����룬����0������������ֹ����");
	scanf("%d",&a); 
	}while(a==0);
	return 0; 
} 
