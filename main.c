#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include "list.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
   menu();
   input();
   printf("请输入你要选择的算法\n");
   int x;
       scanf("%d",&x);
       switch (x)
           {
			case 1:matrixadd(double **a,double **b,int n,int m);
					break;
			case 2:matrixsubtract(double **a,double **b,int n,int m);
					break;
			case 3:matrixmultiply(double **a,int n,int m);
			        break;
			case 4:matrixtransposition(double **a,int n,int m);
		        	break;
			case 5:matrixinverse(double **a,int n,int m);
			        break;
			 }
	return 0;
}
