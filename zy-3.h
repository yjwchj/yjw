
#include<stduo.h>
#include<stdlib.h>
#define LEN sizeof(struct province)
int main()
{
	struct province  //�����ṹ��
	{int s;
	int d;
	int c;
	int w;
	int k;
	struct province *next;  //next��ָ�������ָ��ṹ��
	};
char choose;  //ʹ����ѡ�����
  switch(choose)
  {case'A':{int number;  //����Ա���
            switch(number)
			{case'1':pt=creat();  //���ÿ����ڴ������ĺ���
			case'2':void addnode(struct province *p);  //�����������ݵĺ���
			case'3':





  case'B':{int number;  //��ͨ�û����
	       switch(number)
		   {case'1':print(head);break;  //����������ݺ���
		   case'2':
		   case'3':
		   case'4':
		   case'5':
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
		  }break;
default:printf("enter choose error!\n);  //������ʾ
  }
	return 0;
}

struct province * creat(void)  //���庯�����˺�������һ��ָ������ͷ��ָ��
{struct province *head;
struct province *p1,*p2;
int n=0;
p1=p2=(struct province *) mallo(LEN);  //����һ���µ�Ԫ
scanf("%d",&p1->s);  //�����һ��ʡ������
scanf("%d",&p1->d);
scanf("%d",&p1->c);
scanf("%d",&p1->w);
scanf("%d",&p1->k);
head=NULL;
while(p1->num!=0); //��ָ��Ĳ��ǿձ������ѭ��
{n++;
 if(n==1)head=p1;
 else p2->nest=p1;
 p2=p1;
 p1=(struct province *)malloc(LEN);
scanf("%d",&p1->s);
scanf("%d",&p1->d);
scanf("%d",&p1->c);
scanf("%d",&p1->w);
scanf("%d",&p1->k);
}
p2->nest=NULL;
return(head);
}

void print(struct province *head)  //�������
{struct province *p;
p=head; //ͷָ��head
if(head!=NULL)  //ͷָ��ָ��Ϊ�ձ���ѭ��
  do
  {printf("%d",&p1->s);  //�������
   printf("%d",&p1->d);
   printf("%d",&p1->c);
   printf("%d",&p1->w);
   printf("%d",&p1->k);
   p=p->next;  //����һ�����ĵ�ַ�ŵ�ǰһ�����ĳ�Աnext��
  }
  while(p!==NULL);  //ֱ��ָ��ָ��ձ�
}

void addnode(struct province *p)  //�����������ݵĺ���
{int n,i;
scanf("%d",&n);
	struct province *pnew=NULL;  //�����µ�ָ��
printf("������µ�����\n");
for(i=0;i<n;i++)
{pnew=(struct province *)malloc(LEN);  //�����½��
scanf("%d",&p1->s);
scanf("%d",&p1->d);
scanf("%d",&p1->c);
scanf("%d",&p1->w);
scanf("%d",&p1->k);
pnew->next=NULL;  
p->next=pnew;
}
}













