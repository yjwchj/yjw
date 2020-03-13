#include "list.h"
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
		    printf("%lf",*((double *)a+m*i+j);                  //输出新的a矩阵 
		   }
	}
	   printf("\n");
}


void matrixmultiply(double **a,int n,int m)        //数乘函数 
 {
 	printf("请输入你要乘的数：\n"); 
    double x;
    scanf("%d",&x);
    int i, j;
    for(i=0;i<n;i++)
        {
		    for(j=0;j<m;j++)
            {
			  *((double *)a+n*i+j) =x* *((double *)a+m*i+j);        //a矩阵数乘一个数并赋值给a矩阵 
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

void matrixinverse(double **a,int n,int m)                      //求逆函数 
{  int i, j;
	if(n == m)                                                 //判断是否为方阵，如果不是则无逆矩阵 
	{
		m=n;
	
	
        double t;
        int g;
        double c[200][200];
        double b[200][200];
        for(i=0;i<n;i++)
            {for(j=0;j<n;j++)
                {
				  *((double *)b+n*i+j) = *((double *)a+n*i+j);  //将a矩阵的值赋给b这个空数组 
                } 
            } 
        for(i=0;i<n;i++)
           for(j=n;j<2*n;j++)
              *((double *)b+n*i+j)=0;                          //将b矩阵增广，后面为同阶单位阵 
        for(i=0;i<n;i++)
           *((double *)b+n*i+(n+i))=1;                         //单位阵的正对角线上的元素值为1 
        for(g=0;g<n;g++)                                      //进行行变换，变为行阶梯型矩阵 
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
                   *((double *)b+n*i+g)=t;                    //进行列变换，变为列阶梯形矩阵 
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
            *((double *)b+g*i+j)-=*((double *)b+g*i+g)* *((double *)b+g*g+j)/ *((double *)b+g*g+g); //使每行的第一个元素值为0 
            for(j=2*n-1;j>=g;j--)
            *((double *)b+g*g+j)/=*((double *)b+g*g+g);                                             //使正对角线上的原宿值为1 
            } 

            for(i=0;i<n;i++)
               {
                  for(j=0;j<2*n;j++)
                  printf("%lf ",*((double *)b+(2*n)*i+j));                                          //输出第一次变换后的矩阵 
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
                  printf("%lf",*((double *)b+(2*n)*i+j));                                          //输出第二次变换后的矩阵 
                  printf("\n"); 
               }
            for(i=0;i<n;i++) 
               for(j=0;j<n;j++)
                 *((double *)c+n*i+j)=*((double *)b+n*i+(n+j));                                   //将b的后半边矩阵赋给c 
            printf("逆矩阵：\n");
            for(i=0;i<n;i++)
               {
                  for(j=0;j<n;j++)
                  {
				    printf("%lf",*((double *)c+n*i+j));                                          //输出a的逆矩阵c 
                  } 
                  printf("\n"); 
               }
        }
        else
        {
		  printf("无逆矩阵\n");
        } 
}  


void matrixtransposition(double **a,int n,int m)     //转置函数 
 {
 	int i, j;
    double c[200][200];        //定义空的二维数组，存放a的转置矩阵 
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
	   printf("%lf",*((double *)c+m*i+j);   //输出a 的转置矩阵 
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






  

	   




