void matrixadd(double (*a)[200],double (*b)[200],int n,int m)     // 加法函数 
{
    int i, j;	   
    for(i=0;i<n;i++)
        {
		 for(j=0;j<m;j++)
            { 
			 *(*(a+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);   // a矩阵与b矩阵相加并赋值给a矩阵 
			}
		}
    for(i=0;i<n;i++) 
       {
	    for(j=0;j<m;j++)
           {
           	if(j%m==0)
           	printf("\n");
		    printf("%lf",*(*(a+i)+j));    //输出新的a矩阵 
		   }
	   }
	   printf("\n");
}


void matrixsubtract(double (*a)[200],double (*b)[200],int n,int m)  //减法函数 
{ 
    int i, j;
    for(i=0;i<n;i++)
    {
	   for(j=0;j<m;j++)
            {
			 *(*(a+i)+j) = *(*(a+i)+j) - *(*(b+i)+j);            //a矩阵与b矩阵相减并赋值给a矩阵 
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
		    printf("%lf",*(*(a+i)+j));                  //输出新的a矩阵 
		   }
	}
	   printf("\n");
}


void matrixmultiply(double (*a)[200],int n,int m)        //数乘函数 
 {
 	printf("请输入你要乘的数：\n"); 
    double x;
    scanf("%lf",&x);
    int i, j;
    for(i=0;i<n;i++)
        {
		    for(j=0;j<m;j++)
            {
			  *(*(a+i)+j)= x * *(*(a+i)+j);        //a矩阵数乘一个数并赋值给a矩阵 
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
		    printf("%lf",*(*(a+i)+j));                  //输出结果 
		   }
	   } 
    printf("\n");
}

void matrixtransposition(double (*a)[200],int n,int m)     //转置函数 
 {
 	int i, j;
    double c[200][200];        //定义空的二维数组，存放a的转置矩阵 
    for(i=0;i<n;i++)
    {
	  for(j=0;j<m;j++)
        {
		  *(*(c+j)+i) = *(*(a+i)+j);   //将a的行和列交换并赋值给c 
		}
	}
   for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
       {
	    if(j%n==0)
         {
		   printf("\n");
         }
	   printf("%lf",*(*(c+i)+j));  //输出a 的转置矩阵 
	   }
   }
   printf("\n");
}

void matrixinverse(double (*a)[200],int n,int m)
{
	int i, j;
	if(n == m)        //判断是否为方阵，不然则无逆矩阵 
	{
		m=n;
	
	
        double t;
        int g;
        double c[200][200];      
        double b[200][200];
        for(i=0;i<n;i++)       //将目标矩阵赋值给b矩阵 
            {for(j=0;j<n;j++)
                {
				  *(*(b+i)+j)=*(*(a+i)+j);
                } 
            } 
        for(i=0;i<n;i++)                            //增广矩阵，在右边增广同阶的都为零的矩阵 
           for(j=n;j<2*n;j++)
              *(*(b+i)+j)=0;
        for(i=0;i<n;i++)                            //正对角线上的元素都为1，使其为单位阵 
           *(*(b+i)+(n+i))=1;
        for(g=0;g<n;g++)                            //对每行元素进行处理 换为行阶梯型矩阵 
           {
             t=*(*(b+g)+g); 
             i=g;
             while(*(*(b+g)+g)==0)
                 {	
                   *(*(b+g)+g) = *(*(b+(i+1))+g);
                   i++;
                 }
             if(i>g)                                 //对每列进行处理，变为列阶梯型矩阵 
               {
                   *(*(b+i)+g)=t; 
                   for(j=0;j<g;j++)
                      {
                        t=*(*(b+g)+j);
                        *(*(b+g)+j) = *(*(b+i)+j);
                        *(*(b+i)+j)=t;
                      }
             for(j=g+1;j<2*n;j++)
                {
                   t=*(*(b+g)+j);
                  *(*(b+g)+j)= *(*(b+i)+j);
                  *(*(b+i)+j)=t;
                }
                }
            for(i=g+1;i<n;i++)                         //使每行第一个元素值为零 
            for(j=2*n-1;j>=g;j--)
            *(*(b+i)+j)-=*(*(b+i)+g)**(*(b+g)+j)/ *(*(b+g)+g); 
            for(j=2*n-1;j>=g;j--)                      //使对交线上的元素值为1 
            *(*(b+g)+j)/=*(*(b+g)+g); 
            } 

            for(i=0;i<n;i++)                         //是处第一次变换后的矩阵 
               {
                  for(j=0;j<2*n;j++)
                  printf("%lf ",*(*(b+i)+j));
                  printf("\n"); 
               }
            g = n-1;
            while(g>0)
                 {
                    for(i=0;i<g;i++)
                    for(j=2*n-1;j>=g;j--) 
                    *(*(b+i)+j)-=*(*(b+i)+g)* *(*(b+g)+j);
                    g--;
                 }

            for(i=0;i<n;i++)                        //输出第二次变换后的矩阵 
               {
                  for(j=0;j<2*n;j++)
                  printf("%lf",*(*(b+i)+j));
                  printf("\n"); 
               }
            for(i=0;i<n;i++)                       //将b后半边矩阵赋给c 
               for(j=0;j<n;j++)
                 *(*(c+i)+j)=*(*(b+i)+(n+j));
            printf("逆矩阵：\n");
            for(i=0;i<n;i++)                       //输出a的逆矩阵c 
               {
                  for(j=0;j<n;j++)
                  {
				    printf("%lf",*(*(c+i)+j));
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



