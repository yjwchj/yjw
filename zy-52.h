void input(struct province *p,int n)
{ printf("请录入各省各类数据")
   scanf("累计确诊%d",p->Cumulativediagnosis);
    scanf("累计治愈%d",p->Cumulativecure);
    scanf("累计死亡%d",p->Cumulativedeath);
    scanf("新增确诊%d",p->Newlydiagnosed);
    scanf("新增重症%d",p->Newseverecases);
    scanf("累计重症%d",p->Cumulativeseveredisease);
    scanf("新增治愈%d",p->Newcure);
    scanf("新增死亡%d",p->Newdeath);
    scanf("重症减少%d",p->Severereduction);
    scanf("现有疑似%d",p->Existingsuspecte);
    scanf("减少疑似%d",p->Suspectedreduction);
    scanf("疑似增加%d",p->Suspectedincrease);
    n++； 

   }

void output(struct province *p,int n)
{int i;
for(i=0;i<n;i++) 
    {printf("累计确诊%d",p[i]->Cumulativediagnosis);
    printf("累计治愈%d",p[i]->Cumulativecure);
    printf("累计死亡%d",p[i]->Cumulativedeath );
    printf("新增确诊%d",p[i]->Newlydiagnosed);
    printf("新增重症%d",p[i]->Newseverecases);
    printf("累计重症%d",p[i]->Cumulativeseveredisease);
    printf("新增治愈%d",p[i]->Newcure);
    printf("新增死亡%d",p[i]->Newdeath);
    printf("重症减少%d",p[i]->Severereduction);
    printf("现有疑似%d",p[i]->Existingsuspecte);
    printf("减少疑似%d",p[i]->Suspectedreduction);
    printf("疑似增加%d",p[i]->Suspectedincrease);
}
}


