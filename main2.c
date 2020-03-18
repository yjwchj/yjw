#include <stdio.h>
#include <stdlib.h>
#include "matrix2.h"
#include "list2.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	input(n,m,a,b);
    menu();                         //输出菜单函数，供用户使用 
    printf("请输入你的选择：\n");
	int x;                      
    scanf("%d",&x);                 //输入选择 
    switch (x)
        {
			case 1:matrixadd(n,m,a,b);               //引用加法函数 
					break;
			case 2:matrixsubtract(n,m,a,b);         //引用减法函数 
					break;
			case 3:matrixmultiply(n,m,a);          //引用数乘函数 
			        break;
			case 4:matrixtransposition(n,m,a);    //引用转置函数 
		        	break;
			case 5:matrixinverse(n,m,a);          //引用求逆函数 
			        break;
			default:printf("结束\n");   //如果是五种选择之外的则直接结束 printf("结束"); 
	    } 
	return 0;
}


