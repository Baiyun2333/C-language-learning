//ͨѶ¼
//���ܣ����ӡ�ɾ������ѯ���޸�
//һ���˵�ͨѶ¼��Ϣ���������ֻ��š���ϵ
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
*/
void add(struct Person * head){
	Tongxun *pn = (struct Person*)malloc(sizeof(Tongxun));
	pn=head;
//	last = last->next;
	scanf("%20s%d%20s",&pn->name,&pn->phone,&pn->relation);	//������һ���˵ĸ�����Ϣ
	printf("%s,%d,%s\n",pn->name,pn->phone,pn->relation);
}

int main(){
	int a=0;
	struct Person *head = (struct Person*)malloc(sizeof(Tongxun));
	head->next = NULL;
//	struct Person * last=NULL;
	//do{
		
	printf("����1~4�ֱ�ɽ���ͨѶ¼�����ӡ�ɾ������ѯ���޸ģ�"
"����-1���������\n");							//����ʹ��
	scanf("%d",&a);
	if(a==-1)return 0;
	
	switch(a){
		case 1: add(head);break;
		default:printf("���������\n"); 
	} 
	 
	printf("��ɣ�����0�����½���ָ�����룬����0������������ֹ����");
	
} 
