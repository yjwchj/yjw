#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include "list.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
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
	   }
	else
	{
		printf("���ܽ�������\n");
	} 
	menu();                         //����˵����������û�ʹ�� 
    printf("���������ѡ��\n");
	int x;                      
    scanf("%d",&x);                 //����ѡ�� 
    switch (x)
        {
			case 1:matrixadd((double **)a,(double **)b,n,m);         //���üӷ����� 
					break;
			case 2:matrixsubtract((double**)a,(double **)b,n,m);                         //���ü������� 
					break;
			case 3:matrixmultiply((double **)a,n,m);                //�������˺��� 
			        break;
			case 4:matrixinverse((double **)a,n,m);                           //����ת�ú��� 
		        	break;
			case 5:matrixtransposition((double **)a,n,m);          //�������溯�� 
			        break;
			
		
	       if((x!=1) || (x!=2) || (x!=3) || (x!=4) || (x!=5))     //���������ѡ��֮�����ֱ�ӽ��� 
	         {
	        	printf("����"); 
	         }
	   } 
	return 0;
}
