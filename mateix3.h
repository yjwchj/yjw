void matrixadd(double **a,double **b,int n,int m)     // �ӷ����� 
{
    int i, j;	   
    for(i=0;i<n;i++)
        {
		 for(j=0;j<m;j++)
            {
			 *((double *)a+n*i+j)=*((double *)a+n*i+j)+*((double *)b+n*i+j);   // a������b������Ӳ���ֵ��a���� 
			}
		}
    for(i=0;i<n;i++) 
       {
	    for(j=0;j<m;j++)
           {
           	if(j%m==0)
           	printf("\n");
		    printf("%lf",*((double *)a+n*i+j));    //����µ�a���� 
		   }
	   }
	   printf("\n");
}


void matrixsubtract(double **a,double **b,int n,int m)  //�������� 
{ 
    int i, j;
    for(i=0;i<n;i++)
    {
	   for(j=0;j<m;j++)
            {
			  *((double *)a+m*i+j) = *((double *)a+m*i+j) - *((double *)b+m*i+j);            //a������b�����������ֵ��a���� 
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
		    printf("%lf",*((double *)a+m*i+j));                  //����µ�a���� 
		   }
	}
	   printf("\n");
}


void matrixmultiply(double **a,int n,int m)        //���˺��� 
 {
 	printf("��������Ҫ�˵�����\n"); 
    double x;
    scanf("%lf",&x);
    int i, j;
    for(i=0;i<n;i++)
        {
		    for(j=0;j<m;j++)
            {
			  *((double *)a+m*i+j)=*((double *)a+m*i+j)*x;        //a��������һ��������ֵ��a���� 
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
		    printf("%lf",*((double *)a+m*i+j));                  //������ 
		   }
	   } 
    printf("\n");
}


double caculate(double **a,int n)                //��������ʽ����,a���鱣����Ҫ�����ľ���
{
	int i,j,k;
 	double sum = 0;                             //���ڴ����ۼӽ�� 
	int l = 0;                                 //���������������� 
	int r = 0; 
 	if (n == 1)  
	return *((double *)a);         //һ�׾��������ʽ�������� 
  	for (i = 0; i < n; i++)
	{
   		l = 0,r = 0;   
   		double b[n][n];                         //����ĳ���ȥ���и������õľ���
   		for (j = 1; j < n; j++)
		{
    		for (k = 0; k < n; k++)
			{
     			if (k == i) continue;
     			else
			    {
      				*((double *)b + l*n + r)=*((double *)a + j*n + k); //��������ʽ��չ������n-1������ʽ������b�� 
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
 	double sum=caculate((double **)a,n);  //����������ʽ�ĺ�����������sum�� 
	double b[n][n];
	double c[n][n];                         //����������
 	for(i=0;i<n;i++)
	 {
  		for(j=0;j<n;j++)
		  {
   			l=0,r=0;
   			for(m=0;m<n;m++)
			   {
    				if(m==i) continue;//������Ҫ��ȥ����
    				for(k=0;k<n;k++)
					{
     					if(k==j) continue;//������Ҫ��ȥ����
     					*((double *)b + l*n + r)=*((double *)a + m*n + k);//����ĳ���ȥ���и������õľ���
     					r++;
    				}
    				l++;
    				r=0;
   			   }
	   			*((double *)c + j*n + i)=pow(-1,i+j)*caculate((double **)b,n-1);//�����������ʽ������
  		}
 	}
 	printf("\n");
 	for(i=0;i<n;i++)
	 {
  		for(j=0;j<n;j++)
		{
   			printf("%llf ",(double)c[i][j]/sum); //�������
  		}
  		printf("\n");
 	}
   }
   else
   printf("�������\n");
 	 
}






void matrixtransposition(double **a,int n,int m)     //ת�ú��� 
 {
 	int i, j;
    double c[n][m];        //����յĶ�ά���飬���a��ת�þ��� 
    for(i=0;i<n;i++)
    {
	  for(j=0;j<m;j++)
        {
		  *((double *)c+m*j+i) = *((double *)a+m*i+j);   //��a���к��н�������ֵ��c 
		}
	}
   for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
       {
	    if(j%n==0)
         {
		   printf("\n");
         }
	   printf("%lf",*((double *)c+m*i+j));   //���a ��ת�þ��� 
	   }
   }
   printf("\n");
}
 
void menu()                  //�˵����� 
{
	
       printf("���������ѡ��\n");
	   printf("\t1.��������ļ�����\n");
	   printf("\t2.��������ļ�����\n");
	   printf("\t3.�������������\n");
	   printf("\t4.�����ת��\n");
	   printf("\t5.���������\n");
}




