#include <stdio.h>
#include <stdlib.h>
#include "matrix2.h"
#include "list2.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	input(n,m,a,b);
    menu();                         //����˵����������û�ʹ�� 
    printf("���������ѡ��\n");
	int x;                      
    scanf("%d",&x);                 //����ѡ�� 
    switch (x)
        {
			case 1:matrixadd(n,m,a,b);               //���üӷ����� 
					break;
			case 2:matrixsubtract(n,m,a,b);         //���ü������� 
					break;
			case 3:matrixmultiply(n,m,a);          //�������˺��� 
			        break;
			case 4:matrixtransposition(n,m,a);    //����ת�ú��� 
		        	break;
			case 5:matrixinverse(n,m,a);          //�������溯�� 
			        break;
			default:printf("����\n");   //���������ѡ��֮�����ֱ�ӽ��� printf("����"); 
	    } 
	return 0;
}


