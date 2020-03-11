#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include "list.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    menu();
    printf("请输入矩阵行数和列数：\n");
	int n, m;
	scanf("%d,%d",&n,&m);
	int i, j;
	printf("请输入目标矩阵：\n");
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
	printf("请输入矩阵的行数和列数(如果不需要，请输入和上一个矩阵相同的行数和列数)：\n");
	int k, g;
	scanf("%d,%d",&k,&g);
	printf("请输入目标矩阵（如果不需要，请都输入0）：\n");
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
    if((n==k) && (m==g))
       {
       	k=n;
       	g=m;
	   }
	else
	{
		printf("不能进行运算\n");
	} 
    printf("请输入你的选择：\n");
	int x;
    scanf("%d",&x);
    switch (x)
        {
			case 1:matrixadd(a,b,n,m);
					break;
			case 2:matrixsubtract(a,b,n,m);
					break;
			case 3:matrixmultiply(a,n,m);
			        break;
			case 4:matrixtransposition(a,n,m);
		        	break;
			case 5:matrixinverse(a,n,m);
			        break;
			
		}
	if((x!=1) || (x!=2) || (x!=3) || (x!=4) || (x!=5))
	{
		printf("结束"); 
	}
	return 0;
}
