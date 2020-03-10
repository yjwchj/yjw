#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include "list.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{menu();
printf("请输入你要选择的算法\n");
 int x;
       scanf("%d",&x);
       switch (x)
           {
			case 1: matrixadd();
					break;
			case 2:matrixsubtract();
					break;
			case 3:matrixmultiply();
			        break;
			case 4:matrixtransposition();
		        	break;
			case 5:matrixinverse();
			        break;
			 }
	return 0;
}
