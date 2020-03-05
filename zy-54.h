int modify(struct province pro[34])
{printf("请输入你要修改的省区名字\n");
int m,num;
scanf("%s",name);
for(m=0;m<34;m++);
   {if(strcmp(name,pro[m].name)==0);
        num=m;
   }
    printf("省区名字%s",pro[num].name);
    printf("当日时间%f",pro[num].time);
	printf("累计确诊%d",pro[num].Cumulativediagnosis);
    printf("累计治愈%d",pro[num].Cumulativecure);
    printf("累计死亡%d",pro[num].Cumulativedeath );
    printf("新增确诊%d",pro[num].Newlydiagnosed);
    printf("新增重症%d",pro[num].Newseverecases);
    printf("累计重症%d",pro[num].Cumulativeseveredisease);
    printf("新增治愈%d",pro[num].Newcure);
    printf("新增死亡%d",pro[num].Newdeath);
    printf("重症减少%d",pro[num].Severereduction);
    printf("现有疑似%d",pro[num].Existingsuspecte);
    printf("减少疑似%d",pro[num].Suspectedreduction);
    printf("疑似增加%d",pro[num].Suspectedincrease);
    
    printf("请选择你要修改哪一信息数据\n");
    scanf("%d",&choice);
	switch(choice);
	     {csae 1:printf("请输入新的累计确诊数据:\n");
	             scanf("%d",&pro[num].Cumulativediagnosis);
	             break;
	      case 2:printf("请输入新的累计治愈数据：\n");
	             scanf("%d",&pro[num].Cumulativecure);
	             break;
	      case 3:printf("请输入新的累计死亡数居：\n");
	             scanf("%d",&pro[num].Cumulativedeath);
	             break;
	      case 4:printf("请输入新的新增确诊数据；\n");
	             scanf("%d",&pro[num].Newlydiagnosed);
	             breaak
	      case 5:printf("请输入新的新增重症数据：\n");
	             scanf("%d",&pro[num].Newseverecases);
	             break;
	      case 6:printf("请输入新的累计重症数据：\n");
	             scanf("%d",&pro[num].Cumulativeseveredisease);
	             break;
	      case 7:printf("请输入新的新增治愈数据：\n");
	             scanf("%d",&pro[num].Newcure);
	             break;
	      case 8:printf("请输入新的新增死亡数据：\n");
	             scanf("%d",&pro[num].Newdeath);
	             break;
	      case 9:printf("请输入新的重症减少数据：\n");
	             scanf("%d",pro[num].Severereduction);
	             break;
	      case 10:printf("请输入新的现有疑似数据：\n");
	              scanf("%d",&pro[num].Existingsuspecte);
	              break;
	      case 11:printf("请输入新的减少疑似数据：\n");
	              scanf("%d",&pro[num].Suspectedreduction);
	              break;
	      case 12:printf("请输入新的疑似增加数据：\n");
	              scanf("%d",&pro[num].Suspectedincrease);
	              break;
	}
	        
		 }
	     
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 
}

