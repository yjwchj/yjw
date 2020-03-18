void matrixadd(int n,int m,double (*p1)[m],double (*p2)[m])     // �ӷ����� 
{
	if ((p1 == NULL)||(p2 == NULL)) 			//�βο�У�� 
	{
		printf("error\n");
		exit(1);
	}
    int i, j;	   
    for(i=0;i<n;i++)
        {
		 for(j=0;j<m;j++)
            { 
			 *(*(p1+i)+j) = *(*(p1+i)+j) + *(*(p2+i)+j);   // a������b������Ӳ���ֵ��a���� 
			}
		}
    for(i=0;i<n;i++) 
       {
	    for(j=0;j<m;j++)
           {
           	if(j%m==0)
           	printf("\n");
		    printf("%lf",*(*(p1+i)+j));    //����µ�a���� 
		   }
	   }
	   printf("\n");
}


void matrixsubtract(int n,int m,double (*p1)[m],double (*p2)[m])  //�������� 
{
    if ((p1 == NULL)||(p2 == NULL)) 			//�βο�У�� 
	{
		printf("error\n");
		exit(1);
	}
    int i, j;
    for(i=0;i<n;i++)
    {
	   for(j=0;j<m;j++)
            {
			 *(*(p1+i)+j) = *(*(p1+i)+j) - *(*(p2+i)+j);            //a������b�����������ֵ��a���� 
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
		    printf("%lf",*(*(p1+i)+j));                  //����µ�a���� 
		   }
	}
	   printf("\n");
}


void matrixmultiply(int n,int m,double (*p1)[m])        //���˺��� 
 {	
    if(p1 == NULL) 			//�βο�У�� 
	{
		printf("error\n");
		exit(1);
	}
 	
 	printf("��������Ҫ�˵�����\n"); 
    double x;
    scanf("%lf",&x);
    int i, j;
    for(i=0;i<n;i++)
        {
		    for(j=0;j<m;j++)
            {
			  *(*(p1+i)+j)= x * *(*(p1+i)+j);        //a��������һ��������ֵ��a���� 
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
		    printf("%lf",*(*(p1+i)+j));                  //������ 
		   }
	   } 
    printf("\n");
}

void matrixtransposition(int n,int m,double (*p1)[m])     //ת�ú��� 
 {
 	if(p1 == NULL) 			//�βο�У�� 
	{
		printf("error\n");
		exit(1);
	}
 	int i, j;
    double c[m][m];        //����յĶ�ά���飬���a��ת�þ��� 
    double *p3;
    p3=c;
    for(i=0;i<n;i++)
    {
	  for(j=0;j<m;j++)
        {
		  *(*(p3+j)+i) = *(*(p1+i)+j);   //��a���к��н�������ֵ��c 
		}
	}
   for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
       {
	    if(j%n==0)
         {
		   printf("\n");
         }
	   printf("%lf",*(*(p3+i)+j));  //���a ��ת�þ��� 
	   }
   }
   printf("\n");
}

void matrixinverse(int n,int m,double (*p1)[m])
{
	if (p1 == NULL) 			//�βο�У�� 
	{
		printf("error\n");
		exit(1);
	}
	int i, j;
	if(n == m)        //�ж��Ƿ�Ϊ���󣬲�Ȼ��������� 
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
        for(i=0;i<n;i++)       //��Ŀ�����ֵ��b���� 
            {for(j=0;j<n;j++)
                {
				  *(*(p3+i)+j)=*(*(p3+i)+j);
                } 
            } 
        for(i=0;i<n;i++)                            //����������ұ�����ͬ�׵Ķ�Ϊ��ľ��� 
           {
		     for(j=n;j<2*n;j++)
              {
			    *(*(p3+i)+j)=0;
			  } 
            } 
        for(i=0;i<n;i++)                            //���Խ����ϵ�Ԫ�ض�Ϊ1��ʹ��Ϊ��λ�� 
           {
		    *(*(p3+i)+(n+i))=1;
		    } 
        for(g=0;g<n;g++)                            //��ÿ��Ԫ�ؽ��д��� ��Ϊ�н����;��� 
           {
             t=*(*(p3+g)+g); 
             i=g;
             while(*(*(p3+g)+g)==0)
                 {	
                   *(*(p3+g)+g) = *(*(p3+(i+1))+g);
                   i++;
                 }
             if(i>g)                                 //��ÿ�н��д�����Ϊ�н����;��� 
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
            for(i=g+1;i<n;i++)                         //ʹÿ�е�һ��Ԫ��ֵΪ�� 
              for(j=2*n-1;j>=g;j--)
                *(*(p3+i)+j)-=*(*(p3+i)+g)**(*(p3+g)+j)/ *(*(p3+g)+g); 
            for(j=2*n-1;j>=g;j--)                      //ʹ�Խ����ϵ�Ԫ��ֵΪ1 
               *(*(p3+g)+j)/=*(*(p3+g)+g); 
            } 

            for(i=0;i<n;i++)                         //�Ǵ���һ�α任��ľ��� 
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

            for(i=0;i<n;i++)                        //����ڶ��α任��ľ��� 
               {
                  for(j=0;j<2*n;j++)
                  printf("%lf",*(*(p3+i)+j));
                  printf("\n"); 
               }
            for(i=0;i<n;i++)                       //��b���߾��󸳸�c 
               for(j=0;j<n;j++)
                 {
				  *(*(p4+i)+j)=*(*(p3+i)+(n+j));
				  } 
            printf("�����\n");
            for(i=0;i<n;i++)                       //���a�������c 
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
		  printf("�������\n");
        } 
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

void input(int n,int m,double (*p1)[m],double (*p2)[m])
{   
    printf("���������������������\n");     //������Ŀ�����                                 
	scanf("%d,%d",&n,&m);                  //�������������� 
	int i, j;
	printf("������Ŀ�����\n");
	p1=a;
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	       {
		   scanf("%lf",&a[i][j]);          //������� 
		   }
	for(i=0;i<m;i++)
	   {
	     if(i%m==0)                       //����ʹ���Ǿ������ʽ 
	      printf("\n");
	   }
	printf("��������������������(�������Ҫ�����������һ��������ͬ������������)��\n");     //������Ҫ�ĵڶ������� 
	int k, g;
	scanf("%d,%d",&k,&g);                 //�������������� 
	printf("������Ŀ������������Ҫ���붼����0����\n");
	p2=b;
	for(i=0;i<k;i++)
	   for(j=0;j<g;j++)
	       {
		    scanf("%lf",&b[i][j]);      //����Ŀ����� 
		   }
	for(i=0;i<g;i++)
	   {
	    if(i%g==0)                     //���� 
	      printf("\n");
       }
    if((n==k) && (m==g))              //�ж����������Ƿ�������������ͬ������ͬ�������� 
       {
       	k=n;                          //ʹ���������ĺ�����������Ϊͬһ������ 
       	g=m;
       }
    else
       {
       	printf("���ܽ�������\n");
	   }
}



