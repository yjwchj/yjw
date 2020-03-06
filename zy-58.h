void save() 
{FILE * fp;
int i;
if(fp=fopen("C:\\yjw\\zy.txt","w"))==NULL;
  {printf("cannot open file\n");
  return;
  }
}
for(i=0;i<34;i++)
   if(fwrite(&pro[i],sizeof(struct province),1,fp)!=1)
     printf("file write error\n");
    flose(fp);
}
