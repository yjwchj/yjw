void matrixadd()
 { 	printf("请输入第一个矩阵行数和列数：\n");
	int n,m;
	scanf("%d,%d",&n,&m);
	int i,j;
	printf("请输入目标矩阵：\n");
	double a[200][200];
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	       {scanf("%lf",&a[i][j]);
		   }
	for(i=0;i<n;i++)
	   {if(i%m==0)
	      printf("\n");
	   }
	printf("请输入第二个矩阵的行数和列数：\n");
	int k,g;
	scanf("%d,%d",&k,&g);
	printf("请输入目标矩阵：\n");
	double b[200][200];
	for(i=0;i<k;i++)
	   for(j=0;j<g;j++)
	       {scanf("%lf",&b[i][j]);
		   }
	for(i=0;i<g;i++)
	   {if(i%g==0)
	      printf("\n");
	if((n==k)&&(m==g))
	   {k=n;
	    g=m;
	   
    for(i=0;i<n;i++)
        {for(j=0;j<m;j++)
            {a[i][j]=a[i][j]+b[i][j];
			}
		}
    for(i=0;i<n;i++) 
       {for(j=0;j<m;j++)
           {printf("%lf",a[i][j]);
		   }
	}
	   }
	   else
	   printf("不能进行运算\n");
	   printf("\n");
}

 void matrixsubtract()
 {  printf("请输入第一个矩阵行数和列数：\n");
	int n,m;
	scanf("%d,%d",&n,&m);
	int i,j;
	printf("请输入目标矩阵：\n");
	double a[200][200];
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	       {scanf("%lf",&a[i][j]);
		   }
	for(i=0;i<n;i++)
	   {if(i%m==0)
	      printf("\n");
	   }
	printf("请输入第二个矩阵的行数和列数：\n");
	int k,g;
	scanf("%d,%d",&k,&g);
	printf("请输入目标矩阵：\n");
	double b[200][200];
	for(i=0;i<k;i++)
	   for(j=0;j<g;j++)
	       {scanf("%lf",&b[i][j]);
		   }
	for(i=0;i<g;i++)
	   {if(i%g==0)
	      printf("\n");
    if((n==k)&&(m==g))
       {k=n;
        g=m;
	   
    for(i=0;i<n;i++)
        {for(j=0;j<m;j++)
            {a[i][j]=a[i][j]-b[i][j];
			}
		}
	
    for(i=0;i<n;i++) 
       {for(j=0;j<m;j++)
           {printf("%lf",a[i][j]);
		   }
	   }
}
    else
    printf("不能进行运算\n");
	   printf("\n");
	   
void matrixmultiply()
 {
	printf("请输入第一个矩阵行数和列数：\n");
	int n,m;
	scanf("%d,%d",&n,&m);
	int i,j;
	printf("请输入目标矩阵：\n");
	double a[200][200];
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	       {scanf("%lf",&a[i][j]);
		   }
	for(i=0;i<n;i++)
	   {if(i%m==0)
	      printf("\n");
 double x;
 scanf("%lf",&x);
 for(i=0;i<n;i++)
    {for(j=0;j<m;j++)
        {a[i][j]=x*a[i][j];
		}
	}
for(i=0;i<n;i++)
   {for(j=0;j<m;j++)
       {if(j%m==0)
       printf("\n");
	   printf("%lf",a[i][j]);
	   }
   }
   printf("\n");
   
void matrixtransposition()
 {	printf("请输入第一个矩阵行数和列数：\n");
	int n,m;
	scanf("%d,%d",&n,&m);
	int i,j;
	printf("请输入目标矩阵：\n");
	double a[200][200];
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	       {scanf("%lf",&a[i][j]);
		   }
	for(i=0;i<n;i++)
	   {if(i%m==0)
	      printf("\n");
 double c[200][200];
 for(i=0;i<n;i++)
    {for(j=0;j<m;j++)
        {c[j][i]=a[i][j];
		}
	}
for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
       {if(j%n==0)
       printf("\n");
	   printf("%lf",c[i][j]);
	   }
   }
   printf("\n");
 }

void matrixinverse()
{ 	printf("请输入矩阵行数和列数：\n");
	int n,g;
	scanf("%d,%d",&n,&m);
	int i,j;
	printf("请输入目标矩阵：\n");
	double a[200][200];
	for(i=0;i<n;i++)
	   for(j=0;j<g;j++)
	       {scanf("%lf",&a[i][j]);
		   }
	for(i=0;i<n;i++)
	   {if(i%g==0)
	      printf("\n");
	if(n==g)
	{g=n;
	
float t;
int m;
double c[200][200];
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%f",&a[i][j]);
//增广矩阵（A|E）存入二维数组b
for(i=0;i<n;i++)
for(j=0;j<n;j++)
b[i][j]=a[i][j];
for(i=0;i<n;i++)
for(j=n;j<2*n;j++)
b[i][j]=0;
for(i=0;i<n;i++)
b[i][n+i]=1;
for(m=0;m<n;m++) //对每行进行处理。
{
t=b[m][m]; //预存b[m][m]。
i=m;
while(b[m][m]==0)
{
b[m][m]=b[i+1][m];
i++;
}
if(i>m)
{
b[i][m]=t; //实现交换。
//交换其它各列相应位置的元素
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
b[i][j]-=b[i][m]*b[m][j]/b[m][m]; //m=0时，将第一行的-b[i][0]/b[0][0]倍加到以下各行。这样以下每行第一个元素b[i][0]就为0。
for(j=2*n-1;j>=m;j--)
b[m][j]/=b[m][m]; //对第m行作行变换，同除以b[m][m]，使b[m][m]为1。
}
printf("增广矩阵：\n");
for(i=0;i<n;i++)
{
for(j=0;j<2*n;j++)
printf("%3.5f ",b[i][j]);
printf("\n"); //实现了：每个i对应一个换行。
}
m=n-1;
while(m>0)
{
for(i=0;i<m;i++)
for(j=2*n-1;j>=m;j--) //千万注意，此处j必须递减，否则b[i][m]先变为0，后面的计算就无效！
b[i][j]-=b[i][m]*b[m][j];
m--;
}
printf("新的矩阵：\n");
for(i=0;i<n;i++)
{
for(j=0;j<2*n;j++)
printf("%3.5f ",b[i][j]);
printf("\n"); //实现了：每个i对应一个换行。
}
for(i=0;i<n;i++) 
for(j=0;j<n;j++)
c[i][j]=b[i][n+j];
printf("逆矩阵：\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%3.5f ",c[i][j]);
printf("\n"); 
}
}
else
printf("无逆矩阵\n");
} 
	   
	   
	   
	   




