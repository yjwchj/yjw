#include "list.h"
void matrixadd()
{
    printf("�������һ������������������\n");
	int n,m;
	scanf("%d,%d",&n,&m);
	int i,j;
	printf("������Ŀ�����\n");
	double a[200][200];
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	       {
		   scanf("%lf",&a[i][j]);
		   }
	for(i=0;i<m;i++)
	   {
	     if(i%m==0)
	      printf("\n");
	   }
	printf("������ڶ��������������������\n");
	int k,g;
	scanf("%d,%d",&k,&g);
	printf("������Ŀ�����\n");
	double b[200][200];
	for(i=0;i<k;i++)
	   for(j=0;j<g;j++)
	       {
		    scanf("%lf",&b[i][j]);
		   }
	for(i=0;i<g;i++)
	   {
	    if(i%g==0)
	      printf("\n");
	}
	if((n==k)&&(m==g))
	   {
	    k=n;
	    g=m;
	   
    for(i=0;i<n;i++)
        {
		 for(j=0;j<m;j++)
            {
			 a[i][j]=a[i][j]+b[i][j];
			}
		}
    for(i=0;i<n;i++) 
       {
	    for(j=0;j<m;j++)
           {
           	if(j%m==0)
           	printf("\n");
		    printf("%lf",a[i][j]);
		   }
	   }
	   }
	   else
	  {
	   printf("���ܽ�������\n");
	   } 
	   printf("\n");
}


void matrixsubtract()
{  printf("�������һ������������������\n");
	int n,m;
	scanf("%d,%d",&n,&m);
	int i,j;
	printf("������Ŀ�����\n");
	double a[200][200];
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	       {
		    scanf("%lf",&a[i][j]);
		   }
	for(i=0;i<m;i++)
	   {
	     if(i%m==0)
	      printf("\n");
	   }
	printf("������ڶ��������������������\n");
	int k,g;
	scanf("%d,%d",&k,&g);
	printf("������Ŀ�����\n");
	double b[200][200];
	for(i=0;i<k;i++)
	   for(j=0;j<g;j++)
	       {
		    scanf("%lf",&b[i][j]);
		   }
	for(i=0;i<g;i++)
	   {
	     if(i%g==0)
	      printf("\n");
	   }
    if((n==k)&&(m==g))
       {
	    k=n;
        g=m;
	   
        for(i=0;i<n;i++)
           {
		    for(j=0;j<m;j++)
            {
			  a[i][j]=a[i][j]-b[i][j];
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
       }
       
       
    else
    printf("���ܽ�������\n");
	   printf("\n");
}


void matrixmultiply()
 {  printf("�������һ������������������\n");
	int n,m;
	scanf("%d,%d",&n,&m);
	int i,j;
	printf("������Ŀ�����\n");
	double a[200][200];
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	       {
		    scanf("%lf",&a[i][j]);
		   }
	for(i=0;i<m;i++)
	   {
	      if(i%m==0)
	       printf("\n");
	   }
	printf("������ڶ��������������������\n");
	int k,g;
	scanf("%d,%d",&k,&g);
	printf("������Ŀ�����\n");
	double b[200][200];
	for(i=0;i<k;i++)
	   for(j=0;j<g;j++)
	       {
		    scanf("%lf",&b[i][j]);
		   }
	for(i=0;i<g;i++)
	   {
	      if(i%g==0)
	      printf("\n");
	   }
    if((n==k)&&(m==g))
       {
	    k=n;
        g=m;
	   
        for(i=0;i<n;i++)
           {
		     for(j=0;j<m;j++)
            {a[i][j]=a[i][j]-b[i][j];
			}
	    	}
	
        for(i=0;i<n;i++) 
          {
		    for(j=0;j<m;j++)
          {
		    if(j%m==0)
           {
		    printf("\n");}
		    printf("%lf",a[i][j]);
		   }
	   }
       }
       
       
    else
    {
	   printf("���ܽ�������\n");
    } 
	   printf("\n");
}

void matrixinverse()
{ 	printf("���������������������\n");
	int n,g;
	scanf("%d,%d",&n,&g);
	int i,j;
	printf("������Ŀ�����\n");
	double a[200][200];
	for(i=0;i<n;i++)
	   for(j=0;j<g;j++)
	       {
		   scanf("%lf",&a[i][j]);
		   }
	for(i=0;i<g;i++)
	   {
	      if(i%g==0)
	      printf("\n");
	  }
	if(n==g)
	{
		g=n;
	
	
        float t;
        int m;
        double c[200][200];
        double b[200][200];
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        b[i][j]=a[i][j];
        for(i=0;i<n;i++)
        for(j=n;j<2*n;j++)
        b[i][j]=0;
        for(i=0;i<n;i++)
        b[i][n+i]=1;
        for(m=0;m<n;m++) 
           {
             t=b[m][m]; 
             i=m;
             while(b[m][m]==0)
                 {	
                   b[m][m]=b[i+1][m];
                   i++;
                 }
             if(i>m)
               {
                   b[i][m]=t; 
                   for(j=0;j<m;j++)
                      {
                        t=b[m][j];
                        b[m][j]=b[i][j];
                        b[i][j]=t;
                      }
             for(j=m+1;j<2*n;j++)
                {
                   t=b[m][j];
                   b[m][j]=b[i][j];
                   b[i][j]=t;
                }
                }
            for(i=m+1;i<n;i++)
            for(j=2*n-1;j>=m;j--)
            b[i][j]-=b[i][m]*b[m][j]/b[m][m]; 
            for(j=2*n-1;j>=m;j--)
            b[m][j]/=b[m][m]; 
            } 

            for(i=0;i<n;i++)
               {
                  for(j=0;j<2*n;j++)
                  printf("%lf ",b[i][j]);
                  printf("\n"); 
               }
            m=n-1;
            while(m>0)
                 {
                    for(i=0;i<m;i++)
                    for(j=2*n-1;j>=m;j--) 
                    b[i][j]-=b[i][m]*b[m][j];
                    m--;
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
                  printf("%lf",c[i][j]);
                  printf("\n"); 
               }
        }
        else
        printf("�������\n");
} 

void matrixtransposition()
 {	printf("���������������������\n");
	int n,m;
	scanf("%d,%d",&n,&m);
	int i,j;
	printf("������Ŀ�����\n");
	double a[200][200];
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	       {
		   scanf("%lf",&a[i][j]);
		   }
	for(i=0;i<m;i++)
	   {
	      if(i%m==0)
	      printf("\n");
	  }
    double c[200][200];
    for(i=0;i<n;i++)
    {for(j=0;j<m;j++)
        {c[j][i]=a[i][j];
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




  

	   




