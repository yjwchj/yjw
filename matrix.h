#include "list.h"
void matrixadd(double **a,double **b,int n,int m)
{
    int i, j;	   
    for(i=0;i<n;i++)
        {
		 for(j=0;j<m;j++)
            {
			 *((double *)a+n*i+m*j)=*((double *)a+n*i+m*j)+*((double *)b+n*i+m*j);
			}
		}
    for(i=0;i<n;i++) 
       {
	    for(j=0;j<m;j++)
           {
           	if(j%m==0)
           	printf("\n");
		    printf("%lf",*((double *)a+n*i+m*j));
		   }
	   }
	   printf("\n");
}


void matrixsubtract(double **a,double **b,int n,int m)
{ 
    int i, j;
    for(i=0;i<n;i++)
    {
	   for(j=0;j<m;j++)
            {
			  a[i][j] = a[i][j] - b[i][j];
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
		    printf("%lf",a[i][j]);
		   }
	}
	   printf("\n");
}


void matrixmultiply(double **a,int n,int m)
 {
 	printf("��������Ҫ�˵�����\n"); 
    double x;
    scanf("%d",&x);
    int i, j;
    for(i=0;i<n;i++)
        {
		    for(j=0;j<m;j++)
            {
			  *((double *)a+n*i+j) =x* *((double *)a+m*i+j);
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
		    printf("%lf",*((double *)a+m*i+j));
		   }
	   } 
    printf("\n");
}

void matrixinverse(double **a,int n,int m)
{  int i, j;
	if(n == m)
	{
		m=n;
	
	
        double t;
        int g;
        double c[200][200];
        double b[200][200];
        for(i=0;i<n;i++)
            {for(j=0;j<n;j++)
                {
				  b[i][j]=a[i][j];
                } 
            } 
        for(i=0;i<n;i++)
        for(j=n;j<2*n;j++)
        b[i][j]=0;
        for(i=0;i<n;i++)
        b[i][n+i]=1;
        for(g=0;g<n;g++) 
           {
             t=b[g][g]; 
             i=g;
             while(b[g][g]==0)
                 {	
                   b[g][g] = b[i+1][g];
                   i++;
                 }
             if(i>g)
               {
                   b[i][g]=t; 
                   for(j=0;j<g;j++)
                      {
                        t=b[g][j];
                        b[g][j] = b[i][j];
                        b[i][j]=t;
                      }
             for(j=g+1;j<2*n;j++)
                {
                   t=b[g][j];
                   b[g][j] = b[i][j];
                   b[i][j]=t;
                }
                }
            for(i=g+1;i<n;i++)
            for(j=2*n-1;j>=g;j--)
            b[i][j]-=b[i][g]*b[g][j]/b[g][g]; 
            for(j=2*n-1;j>=g;j--)
            b[g][j]/=b[g][g]; 
            } 

            for(i=0;i<n;i++)
               {
                  for(j=0;j<2*n;j++)
                  printf("%lf ",b[i][j]);
                  printf("\n"); 
               }
            g = n-1;
            while(g>0)
                 {
                    for(i=0;i<g;i++)
                    for(j=2*n-1;j>=g;j--) 
                    b[i][j]-=b[i][g]*b[g][j];
                    g--;
                 }

            for(i=0;i<n;i++)
               {
                  for(j=0;j<2*n;j++)
                  printf("%lf",b[i][j]);
                  printf("\n"); 
               }
            for(i=0;i<n;i++) 
               for(j=0;j<n;j++)
                 c[i][j]=b[i][n+j];
            printf("�����\n");
            for(i=0;i<n;i++)
               {
                  for(j=0;j<n;j++)
                  {
				    printf("%lf",c[i][j]);
                  } 
                  printf("\n"); 
               }
        }
        else
        {
		  printf("�������\n");
        } 
} 

void matrixtransposition(double **a,int n,int m)
 {
 	int i, j;
    double c[200][200];
    for(i=0;i<n;i++)
    {
	  for(j=0;j<m;j++)
        {
		  c[j][i] = a[i][j];
		}
	}
   for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
       {
	    if(j%n==0)
         {
		   printf("\n");
         }
	   printf("%lf",c[i][j]);
	   }
   }
   printf("\n");
}
 
void menu()
{
	
       printf("���������ѡ��\n");
	   printf("\t1.��������ļ�����\n");
	   printf("\t2.��������ļ�����\n");
	   printf("\t3.�������������\n");
	   printf("\t4.���������\n");
	   printf("\t5.�����ת��\n");
}






  

	   




