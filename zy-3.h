
#include<stduo.h>
#include<stdlib.h>
#define LEN sizeof(struct province)
int main()
{
	struct province  //建立结构体
	{int s;
	int d;
	int c;
	int w;
	int k;
	struct province *next;  //next是指针变量，指向结构体
	};
char choose;  //使用者选择身份
  switch(choose)
  {case'A':{int number;  //管理员身份
            switch(number)
			{case'1':pt=creat();  //调用开辟内存的链表的函数
			case'2':void addnode(struct province *p);  //调用增加数据的函数
			case'3':





  case'B':{int number;  //普通用户身份
	       switch(number)
		   {case'1':print(head);break;  //调用输出数据函数
		   case'2':
		   case'3':
		   case'4':
		   case'5':
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
		  }break;
default:printf("enter choose error!\n);  //错误提示
  }
	return 0;
}

struct province * creat(void)  //定义函数，此函数返回一个指向链表头的指针
{struct province *head;
struct province *p1,*p2;
int n=0;
p1=p2=(struct province *) mallo(LEN);  //开辟一个新单元
scanf("%d",&p1->s);  //输入第一个省的数据
scanf("%d",&p1->d);
scanf("%d",&p1->c);
scanf("%d",&p1->w);
scanf("%d",&p1->k);
head=NULL;
while(p1->num!=0); //若指向的不是空表，则继续循环
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

void print(struct province *head)  //输出函数
{struct province *p;
p=head; //头指针head
if(head!=NULL)  //头指针指向不为空表则循环
  do
  {printf("%d",&p1->s);  //输出数据
   printf("%d",&p1->d);
   printf("%d",&p1->c);
   printf("%d",&p1->w);
   printf("%d",&p1->k);
   p=p->next;  //将下一个结点的地址放到前一个结点的成员next中
  }
  while(p!==NULL);  //直到指针指向空表
}

void addnode(struct province *p)  //定义增加数据的函数
{int n,i;
scanf("%d",&n);
	struct province *pnew=NULL;  //定义新的指针
printf("请添加新的数据\n");
for(i=0;i<n;i++)
{pnew=(struct province *)malloc(LEN);  //开辟新结点
scanf("%d",&p1->s);
scanf("%d",&p1->d);
scanf("%d",&p1->c);
scanf("%d",&p1->w);
scanf("%d",&p1->k);
pnew->next=NULL;  
p->next=pnew;
}
}













