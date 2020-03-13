#include "list.h"
void matrixadd(double **a,double **b,int n,int m)     // �ӷ����� 
{
    int i, j;	   
    for(i=0;i<n;i++)
        {
		 for(j=0;j<m;j++)
            {
			 *((double *)a+n*i+j)=*((double *)a+n*i+j)+*((double *)b+n*i+j);   // a������b������Ӳ���ֵ��a���� 
			}
		}
    for(i=0;i<n;i++) 
       {
	    for(j=0;j<m;j++)
           {
           	if(j%m==0)
           	printf("\n");
		    printf("%lf",*((double *)a+n*i+j));    //����µ�a���� 
		   }
	   }
	   printf("\n");
}


void matrixsubtract(double **a,double **b,int n,int m)  //�������� 
{ 
    int i, j;
    for(i=0;i<n;i++)
    {
	   for(j=0;j<m;j++)
            {
			  *((double *)a+m*i+j) = *((double *)a+m*i+j) - *((double *)b+m*i+j);            //a������b�����������ֵ��a���� 
			}
	    	}
	
    for(i=0;i<n;i++) 
    {
	   for(j=0;j<m;j++)
          {
		    if(j%m==0)
           {
		    printf("\n");
		   }
		    printf("%lf",*((double *)a+m*i+j);                  //����µ�a���� 
		   }
	}
	   printf("\n");
}


void matrixmultiply(double **a,int n,int m)        //���˺��� 
 {
 	printf("��������Ҫ�˵�����\n"); 
    double x;
    scanf("%d",&x);
    int i, j;
    for(i=0;i<n;i++)
        {
		    for(j=0;j<m;j++)
            {
			  *((double *)a+n*i+j) =x* *((double *)a+m*i+j);        //a��������һ��������ֵ��a���� 
			}
	    } 
	
    for(i=0;i<n;i++) 
        {
		    for(j=0;j<m;j++)
          {
		    if(j%m==0)
           {
		      printf("\n");
		   }
		    printf("%lf",*((double *)a+m*i+j));                  //������ 
		   }
	   } 
    printf("\n");
}

void matrixinverse(double **a,int n,int m)                      //���溯�� 
{  int i, j;
	if(n == m)                                                 //�ж��Ƿ�Ϊ�������������������� 
	{
		m=n;
	
	
        double t;
        int g;
        double c[200][200];
        double b[200][200];
        for(i=0;i<n;i++)
            {for(j=0;j<n;j++)
                {
				  *((double *)b+n*i+j) = *((double *)a+n*i+j);  //��a�����ֵ����b��������� 
                } 
            } 
        for(i=0;i<n;i++)
           for(j=n;j<2*n;j++)
              *((double *)b+n*i+j)=0;                          //��b�������㣬����Ϊͬ�׵�λ�� 
        for(i=0;i<n;i++)
           *((double *)b+n*i+(n+i))=1;                         //��λ������Խ����ϵ�Ԫ��ֵΪ1 
        for(g=0;g<n;g++)                                      //�����б任����Ϊ�н����;��� 
           {
             t=*((double *)b+n*g+g); 
             i=g;
             while(*((double *)b+n*g+g)==0)                   
                 {	
                   *((double *)b+n*g+g) = *((double *)b+n*(i+1)+g);
                   i++;
                 }
             if(i>g)
               {
                   *((double *)b+n*i+g)=t;                    //�����б任����Ϊ�н����ξ��� 
                   for(j=0;j<g;j++)
                      {
                        t=*((double *)b+g*g+j);
                        *((double *)b+g*g+j) = *((double *)b+g*i+j);
                        *((double *)b+g*i+j)=t;
                      }
             for(j=g+1;j<2*n;j++)
                {
                   t=*((double *)b+(2*n)*g+j);
                  *((double *)b+(2*n)*g+j)  = *((double *)b+(2*n)*i+j);
                   *((double *)b+(2*n)*i+j)=t;
                }
                }
            for(i=g+1;i<n;i++)
            for(j=2*n-1;j>=g;j--)
            *((double *)b+g*i+j)-=*((double *)b+g*i+g)* *((double *)b+g*g+j)/ *((double *)b+g*g+g); //ʹÿ�еĵ�һ��Ԫ��ֵΪ0 
            for(j=2*n-1;j>=g;j--)
            *((double *)b+g*g+j)/=*((double *)b+g*g+g);                                             //ʹ���Խ����ϵ�ԭ��ֵΪ1 
            } 

            for(i=0;i<n;i++)
               {
                  for(j=0;j<2*n;j++)
                  printf("%lf ",*((double *)b+(2*n)*i+j));                                          //�����һ�α任��ľ��� 
                  printf("\n"); 
               }
            g = n-1;
            while(g>0)
                 {
                    for(i=0;i<g;i++)
                    for(j=2*n-1;j>=g;j--) 
                    *((double *)b+g*i+j)-=*((double *)b+g*i+j)* *((double *)b+g*g+j);
                    g--;
                 }

            for(i=0;i<n;i++)
               {
                  for(j=0;j<2*n;j++)
                  printf("%lf",*((double *)b+(2*n)*i+j));                                          //����ڶ��α任��ľ��� 
                  printf("\n"); 
               }
            for(i=0;i<n;i++) 
               for(j=0;j<n;j++)
                 *((double *)c+n*i+j)=*((double *)b+n*i+(n+j));                                   //��b�ĺ��߾��󸳸�c 
            printf("�����\n");
            for(i=0;i<n;i++)
               {
                  for(j=0;j<n;j++)
                  {
				    printf("%lf",*((double *)c+n*i+j));                                          //���a�������c 
                  } 
                  printf("\n"); 
               }
        }
        else
        {
		  printf("�������\n");
        } 
}  


void matrixtransposition(double **a,int n,int m)     //ת�ú��� 
 {
 	int i, j;
    double c[200][200];        //����յĶ�ά���飬���a��ת�þ��� 
    for(i=0;i<n;i++)
    {
	  for(j=0;j<m;j++)
        {
		  *((double *)c+m*j+i) = *((double *)a+m*i+j);   //��a���к��н�������ֵ��c 
		}
	}
   for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
       {
	    if(j%n==0)
         {
		   printf("\n");
         }
	   printf("%lf",*((double *)c+m*i+j);   //���a ��ת�þ��� 
	   }
   }
   printf("\n");
}
 
void menu()                  //�˵����� 
{
	
       printf("���������ѡ��\n");
	   printf("\t1.��������ļ�����\n");
	   printf("\t2.��������ļ�����\n");
	   printf("\t3.�������������\n");
	   printf("\t4.�����ת��\n");
	   printf("\t5.���������\n");
}






  

	   




