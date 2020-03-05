void menu()
{printf("请选择你的身份：\n");
printf("1.管理员      2.普通用户\n");
int x;
scanf("%d",&x);
switch(x)
    {case 1:printf("A.录入数据    B.修改某日某省的数据\n");
            break;
     case 2:printf("A.查询各省的全部数据    B。查询全国的全部数据    C.累计确诊为基准降序查看所有省份的累计确诊、累计治愈、累计死亡数据\n");
            printf("D.查看是否存在数据结点，若有查看数据节点的日期    E.查询任意日期段内全国各项平均数据\n");
            break;
	}

	 
}
