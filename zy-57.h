void sort(struct province pro[],int n)
{int i,j,k,t;
for(i=0;i<n-1;i++)
   {k=i;
   for(j=i+1;j<n;j++)
      {if(pro[i].Cumulativediagnosis>pro[k].Cumulativediagnosis)
         k=j;
	  }
	t=pro[k];
	pro[k]=pro[i];
	stu[i]=t;
   }
for(i=0;i<n;i++)
   {printf("累计确诊%d",pro[i].Cumulativediagnosis);
    printf("累计治愈%d",pro[i].Cumulativecure);
    printf("累计死亡%d",pro[i].Cumulativedeath);
   }
}
