#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include "list.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    printf("请输入矩阵行数和列数：\n");     //请输入目标矩阵 
	int n, m;                                
	scanf("%d,%d",&n,&m);                  //定义行数和列数 
	int i, j;
	printf("请输入目标矩阵：\n");
	double a[200][200];
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
	double b[200][200];
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
	menu();                         //输出菜单函数，供用户使用 
    printf("请输入你的选择：\n");
	int x;                      
    scanf("%d",&x);                 //输入选择 
    switch (x)
        {
			case 1:matrixadd((double **)a,(double **)b,n,m);         //引用加法函数 
					break;
			case 2:matrixsubtract((double**)a,(double **)b,n,m);                         //引用减法函数 
					break;
			case 3:matrixmultiply((double **)a,n,m);                //引用数乘函数 
			        break;
			case 4:matrixinverse((double **)a,n,m);                           //引用转置函数 
		        	break;
			case 5:matrixtransposition((double **)a,n,m);          //引用求逆函数 
			        break;
			
		
	       if((x!=1) || (x!=2) || (x!=3) || (x!=4) || (x!=5))     //如果是五种选择之外的则直接结束 
	         {
	        	printf("结束"); 
	         }
	   } 
	return 0;
}
