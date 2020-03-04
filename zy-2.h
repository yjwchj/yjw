
#include<stduo.h>
int main()
{
	struct province
	{int s;
	int d;
	int c;
	int w;
	int k;
	struct province *next;
	};
char choose;
  switch(choose)
  {case'A':pt=creat();break;
  case'B':{int number;
	       switch(number)
		   {case'1':print(head);break;
		   case'2':
		   case'3':
		   case'4':
		   case'5':
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
		  }break;
degault:printf("enter choose error!\n);
  }
	return 0;
}

struct province * creat()
{struct province *head;
struct province *p1,*p2;
int n=0;
p1=p2=(struct province *) mallo(LEN);
scanf("%d",&p1->s);
scanf("%d",&p1->d);
scanf("%d",&p1->c);
scanf("%d",&p1->w);
scanf("%d",&p1->k);
head=NULL;
while(p1->num!=0);
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

void print(struct province *head)
{struct province *p;
p=head;
if(head!=NULL)
  do
  {printf("%d",&p1->s);
   printf("%d",&p1->d);
   printf("%d",&p1->c);
   printf("%d",&p1->w);
   printf("%d",&p1->k);
   p=p->next;
  }
  while(p!==NULL);
}













