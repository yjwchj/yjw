#include <stdio.h>
#include <stdlib.h>
#include "matrix2.h"
#include "list2.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	printf("���������������������\n");     //������Ŀ����� 
	int n, m;                                
	scanf("%d,%d",&n,&m);                  //�������������� 
	int i, j;
	printf("������Ŀ�����\n");
	double a[200][200];
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	       {
		   scanf("%lf",&a[i][j]);          //������� 
		   }
	for(i=0;i<m;i++)
	   {
	     if(i%m==0)                       //����ʹ���Ǿ������ʽ 
	      printf("\n");
	   }
	printf("��������������������(�������Ҫ�����������һ��������ͬ������������)��\n");     //������Ҫ�ĵڶ������� 
	int k, g;
	scanf("%d,%d",&k,&g);                 //�������������� 
	printf("������Ŀ������������Ҫ���붼����0����\n");
	double b[200][200];
	for(i=0;i<k;i++)
	   for(j=0;j<g;j++)
	       {
		    scanf("%lf",&b[i][j]);      //����Ŀ����� 
		   }
	for(i=0;i<g;i++)
	   {
	    if(i%g==0)                     //���� 
	      printf("\n");
       }
    if((n==k) && (m==g))              //�ж����������Ƿ�������������ͬ������ͬ�������� 
       {
       	k=n;                          //ʹ���������ĺ�����������Ϊͬһ������ 
       	g=m;
	   
    	menu();                         //����˵����������û�ʹ�� 
        printf("���������ѡ��\n");
	    int x;                      
        scanf("%d",&x);                 //����ѡ�� 
        switch (x)
        {
			case 1:matrixadd(a,b,n,m);               //���üӷ����� 
					break;
			case 2:matrixsubtract(a,b,n,m);         //���ü������� 
					break;
			case 3:matrixmultiply(a,n,m);          //�������˺��� 
			        break;
			case 4:matrixtransposition(a,n,m);    //����ת�ú��� 
		        	break;
			case 5:matrixinverse(a,n,m);          //�������溯�� 
			        break;
			default:printf("����\n");   //���������ѡ��֮�����ֱ�ӽ��� printf("����"); 
	    }
	   } 
	else
	{
		printf("���ܽ�������\n");
	} 
	return 0;
}


