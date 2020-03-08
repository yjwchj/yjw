#include<stdio.h>
int main()
{ void matrixadd(double *a,double *b,int n,int m,int h,int w);
	printf("请输入第一个矩阵行数和列数：\n");
	int n,m;
	scanf("%d,%d",&n,&m);
	int i,j;
	printf("请输入目标矩阵：\n");
	double a[n][m];
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	       {scanf("%lf",&a[i][j]);
		   }
	for(i=0;i<n;i++)
	   {if(i%n==0)
	      printf("\n");
	   }
	   
	printf("请输入第二个矩阵的行数和列数：\n");
	int h,w;
	scanf("%d,%d",&h,&w);
	int k,g;
	printf("请输入目标矩阵：\n");
	double b[h][w];
	for(i=0;i<h;i++)
	   for(j=0;j<w;j++)
	       {scanf("%lf",&b[i][j]);
		   }
	for(i=0;i<h;i++)
	   {if(i%h==0)
	      printf("\n");
	   }
	   printf("请进行以下选择：\n");
	   printf("\t\t1.两个矩阵的加运算");
	   printf("\t\t2.两个矩阵的减运算");
	   printf("\t\t3.两个矩阵的数乘运算");
	   
	   
	  	   
	   
return 0;
 }
 
 void matrixadd(double *a,double *b,int n,int m)
 {  int i,j;
    {for(i=0;i<n;i++)
        {for(j=0;j<m;j++)
            {a[i][j4]=a[i][j]+b[i][j];
			}
		}
	}
    for(i=0;i<n;i++) 
       {for(j=0;j<m;j++)
           {printf("%lf",a[i][j]);
		   }
	   }
	   printf("\n");
 }
 
 
  void matrixsubtract(double *a,double *b,int n,int m)
 {  int i,j;
    {for(i=0;i<n;i++)
        {for(j=0;j<m;j++)
            {a[i][j]=a[i][j]-b[i][j];
			}
		}
	}
    for(i=0;i<n;i++) 
       {for(j=0;j<m;j++)
           {printf("%lf",a[i][j]);
		   }
	   }
	   printf("\n");
 }
 
 void matrixmultiply(double *a,int n,int m)
 {double x;
 int i,j;
 scanf("%lf",&x);
 for(i=0;i<n;i++)
    {for(j=0;j<m;j++)
        {a[i][j]=x*a[i][j];
		}
	}
for(i=0;i<n;i++)
   {for(j=0;j<m;j++)
       {printf("%lf",a[i][j]);
	   }
   }
   printf("\n");
 }
 
 void matrixtransposition(double *a,int n,int m)
 {double c[m][n];
 int i,j;
 for(i=0;i<n;i++)
    {for(j=0;j<m;j++)
        {c[j][i]=a[i][j];
		}
	}
for(i=0;i<n;i++)
   {for(j=0;j<m;j++)
       {printf("%lf",c[i][j]);
	   }
   }
   printf("\n");
 }
 
 
 
 
 
 
 void matrixinveerse(double *a,int n;int m)
 {
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
