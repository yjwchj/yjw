void input(struct province *p,int n)
{ printf("��¼���ʡ��������")
   scanf("�ۼ�ȷ��%d",p->Cumulativediagnosis);
    scanf("�ۼ�����%d",p->Cumulativecure);
    scanf("�ۼ�����%d",p->Cumulativedeath);
    scanf("����ȷ��%d",p->Newlydiagnosed);
    scanf("������֢%d",p->Newseverecases);
    scanf("�ۼ���֢%d",p->Cumulativeseveredisease);
    scanf("��������%d",p->Newcure);
    scanf("��������%d",p->Newdeath);
    scanf("��֢����%d",p->Severereduction);
    scanf("��������%d",p->Existingsuspecte);
    scanf("��������%d",p->Suspectedreduction);
    scanf("��������%d",p->Suspectedincrease);
    n++�� 

   }

void output(struct province *p,int n)
{int i;
for(i=0;i<n;i++) 
    {printf("�ۼ�ȷ��%d",p[i]->Cumulativediagnosis);
    printf("�ۼ�����%d",p[i]->Cumulativecure);
    printf("�ۼ�����%d",p[i]->Cumulativedeath );
    printf("����ȷ��%d",p[i]->Newlydiagnosed);
    printf("������֢%d",p[i]->Newseverecases);
    printf("�ۼ���֢%d",p[i]->Cumulativeseveredisease);
    printf("��������%d",p[i]->Newcure);
    printf("��������%d",p[i]->Newdeath);
    printf("��֢����%d",p[i]->Severereduction);
    printf("��������%d",p[i]->Existingsuspecte);
    printf("��������%d",p[i]->Suspectedreduction);
    printf("��������%d",p[i]->Suspectedincrease);
}
}


