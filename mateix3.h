void matrixadd(double **a,double **b,int n,int m)     // 加法函数 
{
    int i, j;	   
    for(i=0;i<n;i++)
        {
		 for(j=0;j<m;j++)
            {
			 *((double *)a+n*i+j)=*((double *)a+n*i+j)+*((double *)b+n*i+j);   // a矩阵与b矩阵相加并赋值给a矩阵 
			}
		}
    for(i=0;i<n;i++) 
       {
	    for(j=0;j<m;j++)
           {
           	if(j%m==0)
           	printf("\n");
		    printf("%lf",*((double *)a+n*i+j));    //输出新的a矩阵 
		   }
	   }
	   printf("\n");
}


void matrixsubtract(double **a,double **b,int n,int m)  //减法函数 
{ 
    int i, j;
    for(i=0;i<n;i++)
    {
	   for(j=0;j<m;j++)
            {
			  *((double *)a+m*i+j) = *((double *)a+m*i+j) - *((double *)b+m*i+j);            //a矩阵与b矩阵相减并赋值给a矩阵 
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
		    printf("%lf",*((double *)a+m*i+j));                  //输出新的a矩阵 
		   }
	}
	   printf("\n");
}


void matrixmultiply(double **a,int n,int m)        //数乘函数 
 {
 	printf("请输入你要乘的数：\n"); 
    double x;
    scanf("%lf",&x);
    int i, j;
    for(i=0;i<n;i++)
        {
		    for(j=0;j<m;j++)
            {
			  *((double *)a+m*i+j)=*((double *)a+m*i+j)*x;        //a矩阵数乘一个数并赋值给a矩阵 
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
		    printf("%lf",*((double *)a+m*i+j));                  //输出结果 
		   }
	   } 
    printf("\n");
}


double caculate(double **a,int n)                //计算行列式函数,a数组保存所要操作的矩阵
{
	int i,j,k;
 	double sum = 0;                             //用于储存累加结果 
	int l = 0;                                 //定义行列两个变量 
	int r = 0; 
 	if (n == 1)  
	return *((double *)a);         //一阶矩阵的行列式是它本身 
  	for (i = 0; i < n; i++)
	{
   		l = 0,r = 0;   
   		double b[n][n];                         //保存某项除去该行该列所得的矩阵
   		for (j = 1; j < n; j++)
		{
    		for (k = 0; k < n; k++)
			{
     			if (k == i) continue;
     			else
			    {
      				*((double *)b + l*n + r)=*((double *)a + j*n + k); //用于行列式的展开。将n-1阶行列式储存在b中 
      				r++;
     			}           
    		}
    		l++;
    		r=0;
   		}	
   		sum+=(*((double *)a + i))*(int)pow(-1,i)*caculate((double **)b,n-1);
  	}
  	return sum;
 	
}

void matrixinverse(double **a,int n,int m)
{	
    if(n==m)
    {
	m=n;
	int i,j,m,k,l,r;
 	double sum=caculate((double **)a,n);  //引用求行列式的函数，储存在sum中 
	double b[n][n];
	double c[n][n];                         //保存伴随矩阵
 	for(i=0;i<n;i++)
	 {
  		for(j=0;j<n;j++)
		  {
   			l=0,r=0;
   			for(m=0;m<n;m++)
			   {
    				if(m==i) continue;//跳过所要除去的行
    				for(k=0;k<n;k++)
					{
     					if(k==j) continue;//跳过所要除去的列
     					*((double *)b + l*n + r)=*((double *)a + m*n + k);//保存某项除去改行该列所得的矩阵
     					r++;
    				}
    				l++;
    				r=0;
   			   }
	   			*((double *)c + j*n + i)=pow(-1,i+j)*caculate((double **)b,n-1);//计算代数余子式并保存
  		}
 	}
 	printf("\n");
 	for(i=0;i<n;i++)
	 {
  		for(j=0;j<n;j++)
		{
   			printf("%llf ",(double)c[i][j]/sum); //求逆矩阵
  		}
  		printf("\n");
 	}
   }
   else
   printf("无逆矩阵\n");
 	 
}






void matrixtransposition(double **a,int n,int m)     //转置函数 
 {
 	int i, j;
    double c[n][m];        //定义空的二维数组，存放a的转置矩阵 
    for(i=0;i<n;i++)
    {
	  for(j=0;j<m;j++)
        {
		  *((double *)c+m*j+i) = *((double *)a+m*i+j);   //将a的行和列交换并赋值给c 
		}
	}
   for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
       {
	    if(j%n==0)
         {
		   printf("\n");
         }
	   printf("%lf",*((double *)c+m*i+j));   //输出a 的转置矩阵 
	   }
   }
   printf("\n");
}
 
void menu()                  //菜单函数 
{
	
       printf("请进行以下选择：\n");
	   printf("\t1.两个矩阵的加运算\n");
	   printf("\t2.两个矩阵的减运算\n");
	   printf("\t3.矩阵的数乘运算\n");
	   printf("\t4.矩阵的转置\n");
	   printf("\t5.矩阵的求逆\n");
}




