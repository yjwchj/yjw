int modify(struct province pro[34])
{printf("��������Ҫ�޸ĵ�ʡ������\n");
int m,num;
scanf("%s",name);
for(m=0;m<34;m++);
   {if(strcmp(name,pro[m].name)==0);
        num=m;
   }
    printf("ʡ������%s",pro[num].name);
    printf("����ʱ��%f",pro[num].time);
	printf("�ۼ�ȷ��%d",pro[num].Cumulativediagnosis);
    printf("�ۼ�����%d",pro[num].Cumulativecure);
    printf("�ۼ�����%d",pro[num].Cumulativedeath );
    printf("����ȷ��%d",pro[num].Newlydiagnosed);
    printf("������֢%d",pro[num].Newseverecases);
    printf("�ۼ���֢%d",pro[num].Cumulativeseveredisease);
    printf("��������%d",pro[num].Newcure);
    printf("��������%d",pro[num].Newdeath);
    printf("��֢����%d",pro[num].Severereduction);
    printf("��������%d",pro[num].Existingsuspecte);
    printf("��������%d",pro[num].Suspectedreduction);
    printf("��������%d",pro[num].Suspectedincrease);
    
    printf("��ѡ����Ҫ�޸���һ��Ϣ����\n");
    scanf("%d",&choice);
	switch(choice);
	     {csae 1:printf("�������µ��ۼ�ȷ������:\n");
	             scanf("%d",&pro[num].Cumulativediagnosis);
	             break;
	      case 2:printf("�������µ��ۼ��������ݣ�\n");
	             scanf("%d",&pro[num].Cumulativecure);
	             break;
	      case 3:printf("�������µ��ۼ��������ӣ�\n");
	             scanf("%d",&pro[num].Cumulativedeath);
	             break;
	      case 4:printf("�������µ�����ȷ�����ݣ�\n");
	             scanf("%d",&pro[num].Newlydiagnosed);
	             breaak
	      case 5:printf("�������µ�������֢���ݣ�\n");
	             scanf("%d",&pro[num].Newseverecases);
	             break;
	      case 6:printf("�������µ��ۼ���֢���ݣ�\n");
	             scanf("%d",&pro[num].Cumulativeseveredisease);
	             break;
	      case 7:printf("�������µ������������ݣ�\n");
	             scanf("%d",&pro[num].Newcure);
	             break;
	      case 8:printf("�������µ������������ݣ�\n");
	             scanf("%d",&pro[num].Newdeath);
	             break;
	      case 9:printf("�������µ���֢�������ݣ�\n");
	             scanf("%d",pro[num].Severereduction);
	             break;
	      case 10:printf("�������µ������������ݣ�\n");
	              scanf("%d",&pro[num].Existingsuspecte);
	              break;
	      case 11:printf("�������µļ����������ݣ�\n");
	              scanf("%d",&pro[num].Suspectedreduction);
	              break;
	      case 12:printf("�������µ������������ݣ�\n");
	              scanf("%d",&pro[num].Suspectedincrease);
	              break;
	}
	        
		 }
	     
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 
}

