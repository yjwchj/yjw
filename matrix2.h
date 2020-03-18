void matrixadd(int n,int m,double (*p1)[m],double (*p2)[m])     // 加法函数 
{
	if ((p1 == NULL)||(p2 == NULL)) 			//形参空校验 
	{
		printf("error\n");
		exit(1);
	}
    int i, j;	   
    for(i=0;i<n;i++)
        {
		 for(j=0;j<m;j++)
            { 
			 *(*(p1+i)+j) = *(*(p1+i)+j) + *(*(p2+i)+j);   // a矩阵与b矩阵相加并赋值给a矩阵 
			}
		}
    for(i=0;i<n;i++) 
       {
	    for(j=0;j<m;j++)
           {
           	if(j%m==0)
           	printf("\n");
		    printf("%lf",*(*(p1+i)+j));    //输出新的a矩阵 
		   }
	   }
	   printf("\n");
}


void matrixsubtract(int n,int m,double (*p1)[m],double (*p2)[m])  //减法函数 
{
    if ((p1 == NULL)||(p2 == NULL)) 			//形参空校验 
	{
		printf("error\n");
		exit(1);
	}
    int i, j;
    for(i=0;i<n;i++)
    {
	   for(j=0;j<m;j++)
            {
			 *(*(p1+i)+j) = *(*(p1+i)+j) - *(*(p2+i)+j);            //a矩阵与b矩阵相减并赋值给a矩阵 
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
		    printf("%lf",*(*(p1+i)+j));                  //输出新的a矩阵 
		   }
	}
	   printf("\n");
}


void matrixmultiply(int n,int m,double (*p1)[m])        //数乘函数 
 {	
    if(p1 == NULL) 			//形参空校验 
	{
		printf("error\n");
		exit(1);
	}
 	
 	printf("请输入你要乘的数：\n"); 
    double x;
    scanf("%lf",&x);
    int i, j;
    for(i=0;i<n;i++)
        {
		    for(j=0;j<m;j++)
            {
			  *(*(p1+i)+j)= x * *(*(p1+i)+j);        //a矩阵数乘一个数并赋值给a矩阵 
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
		    printf("%lf",*(*(p1+i)+j));                  //输出结果 
		   }
	   } 
    printf("\n");
}

void matrixtransposition(int n,int m,double (*p1)[m])     //转置函数 
 {
 	if(p1 == NULL) 			//形参空校验 
	{
		printf("error\n");
		exit(1);
	}
 	int i, j;
    double c[m][m];        //定义空的二维数组，存放a的转置矩阵 
    double *p3;
    p3=c;
    for(i=0;i<n;i++)
    {
	  for(j=0;j<m;j++)
        {
		  *(*(p3+j)+i) = *(*(p1+i)+j);   //将a的行和列交换并赋值给c 
		}
	}
   for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
       {
	    if(j%n==0)
         {
		   printf("\n");
         }
	   printf("%lf",*(*(p3+i)+j));  //输出a 的转置矩阵 
	   }
   }
   printf("\n");
}

void matrixinverse(int n,int m,double (*p1)[m])
{
	if (p1 == NULL) 			//形参空校验 
	{
		printf("error\n");
		exit(1);
	}
	int i, j;
	if(n == m)        //判断是否为方阵，不然则无逆矩阵 
	{
		m=n;
	    double t;
        int g;
        double c[n][n];      
        double b[n][2*n];
        double *p3;
        double *p4;
        p3=b;
        p4=c;
        for(i=0;i<n;i++)       //将目标矩阵赋值给b矩阵 
            {for(j=0;j<n;j++)
                {
				  *(*(p3+i)+j)=*(*(p3+i)+j);
                } 
            } 
        for(i=0;i<n;i++)                            //增广矩阵，在右边增广同阶的都为零的矩阵 
           {
		     for(j=n;j<2*n;j++)
              {
			    *(*(p3+i)+j)=0;
			  } 
            } 
        for(i=0;i<n;i++)                            //正对角线上的元素都为1，使其为单位阵 
           {
		    *(*(p3+i)+(n+i))=1;
		    } 
        for(g=0;g<n;g++)                            //对每行元素进行处理 换为行阶梯型矩阵 
           {
             t=*(*(p3+g)+g); 
             i=g;
             while(*(*(p3+g)+g)==0)
                 {	
                   *(*(p3+g)+g) = *(*(p3+(i+1))+g);
                   i++;
                 }
             if(i>g)                                 //对每列进行处理，变为列阶梯型矩阵 
               {
                   *(*(p3+i)+g)=t; 
                   for(j=0;j<g;j++)
                      {
                        t=*(*(p3+g)+j);
                        *(*(p3+g)+j) = *(*(p3+i)+j);
                        *(*(p3+i)+j)=t;
                      }
                   for(j=g+1;j<2*n;j++)
                     {
                        t=*(*(p3+g)+j);
                        *(*(p3+g)+j)= *(*(p3+i)+j);
                        *(*(p3+i)+j)=t;
                     }
                }
            for(i=g+1;i<n;i++)                         //使每行第一个元素值为零 
              for(j=2*n-1;j>=g;j--)
                *(*(p3+i)+j)-=*(*(p3+i)+g)**(*(p3+g)+j)/ *(*(p3+g)+g); 
            for(j=2*n-1;j>=g;j--)                      //使对交线上的元素值为1 
               *(*(p3+g)+j)/=*(*(p3+g)+g); 
            } 

            for(i=0;i<n;i++)                         //是处第一次变换后的矩阵 
               {
                  for(j=0;j<2*n;j++)
                  printf("%lf ",*(*(p3+i)+j));
                  printf("\n"); 
               }
            g = n-1;
            while(g>0)
                 {
                    for(i=0;i<g;i++)
                    for(j=2*n-1;j>=g;j--) 
                       *(*(p3+i)+j)-=*(*(p3+i)+g)* *(*(p3+g)+j);
                    g--;
                 }

            for(i=0;i<n;i++)                        //输出第二次变换后的矩阵 
               {
                  for(j=0;j<2*n;j++)
                  printf("%lf",*(*(p3+i)+j));
                  printf("\n"); 
               }
            for(i=0;i<n;i++)                       //将b后半边矩阵赋给c 
               for(j=0;j<n;j++)
                 {
				  *(*(p4+i)+j)=*(*(p3+i)+(n+j));
				  } 
            printf("逆矩阵：\n");
            for(i=0;i<n;i++)                       //输出a的逆矩阵c 
               {
                  for(j=0;j<n;j++)
                  {
				    printf("%lf",*(*(p4+i)+j));
                  } 
                  printf("\n"); 
               }
        }
        else
        {
		  printf("无逆矩阵\n");
        } 
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

void input(int n,int m,double (*p1)[m],double (*p2)[m])
{   
    printf("请输入矩阵行数和列数：\n");     //请输入目标矩阵                                 
	scanf("%d,%d",&n,&m);                  //定义行数和列数 
	int i, j;
	printf("请输入目标矩阵：\n");
	p1=a;
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	       {
		   scanf("%lf",&a[i][j]);          //输入矩阵 
		   }
	for(i=0;i<m;i++)
	   {
	     if(i%m==0)                       //换行使其是矩阵的形式 
	      printf("\n");
	   }
	printf("请输入矩阵的行数和列数(如果不需要，请输入和上一个矩阵相同的行数和列数)：\n");     //输入需要的第二个矩阵 
	int k, g;
	scanf("%d,%d",&k,&g);                 //定义行数和列数 
	printf("请输入目标矩阵（如果不需要，请都输入0）：\n");
	p2=b;
	for(i=0;i<k;i++)
	   for(j=0;j<g;j++)
	       {
		    scanf("%lf",&b[i][j]);      //输入目标矩阵 
		   }
	for(i=0;i<g;i++)
	   {
	    if(i%g==0)                     //换行 
	      printf("\n");
       }
    if((n==k) && (m==g))              //判断两个矩阵是否行数和列数相同，不相同则不能运算 
       {
       	k=n;                          //使他们两个的函数和列数各为同一个变量 
       	g=m;
       }
    else
       {
       	printf("不能进行运算\n");
	   }
}



