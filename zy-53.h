void average(float *p,int i)
{float *p_end;
float sum=0,aver;
p_end=p+i-1;
for(;p<=p_end;p++);
   {sum=sum+(*p);
   }
   aver=sum/i;
   printf("average=%f",aver);
}
