#include"stdio.h"
#include"string.h"
#define N 100
#include"1.h"
#include"change.h"
extern struct dagong inf;
extern struct dagong con[100];


void sort(void)
	{
		int i,j,f,num,k;
		char t[20];
		load();
		printf("欢迎来到排序系统\n");
		printf("*****************************************************************\n");
		printf("请输入您的选择：\n");
		printf("1.按字母顺序进行排序\n");
		printf("2.按入学时间进行排序\n");
		printf("3.按知名度及对国家贡献度进行排序");
		printf(" 注：此数据的准确性有待提高，只是按照影响力的初步排序，可能不能代表\
			   真实情况，仅供参考。每个为社会主义建设做出贡献的人都值得我们尊敬！！！\n");
		printf("请输入你的选择：___");
			scanf("%d",&f);
			if(f==2) 
	   { for(i=0;i<N-1;i++)
			{num=i;
			for(j=i+1;j<N;j++)
				if(con[j].entery<con[num].entery)
					num=j;
			if(num!=j)
				{k=con[j].entery;
		         con[j].entery=con[j+1].entery;
				 con[j+1].entery=k;}}
		printf("信息排序成功\n");
		for(i=0;i<N;i++)
			printf("%s\n",con[i].name);}
			if(f==1) 
	   { for(i=0;i<N-1;i++)
			for(j=0;j<N-i-1;j++)
				if(strcmp(con[j].name,con[j+1].name)>0)
				{strcpy(t,con[j].name);
		         strcpy(con[j].name,con[j+1].name);
				 strcpy(con[j+1].name,t);}
		printf("信息排序成功\n");
		for(i=0;i<N;i++)
			printf("%s\n",con[i].name);}
			if(f==3) 
	   { for(i=0;i<N-1;i++)
			for(j=0;j<N-i-1;j++)
				if(strlen(con[j].intor)>strlen(con[j+1].intor))
				{strcpy(t,con[j].name);
		         strcpy(con[j].name,con[j+1].name);
				 strcpy(con[j+1].name,t);}
		printf("信息排序成功\n");
		for(i=0;i<N;i++)
			printf("%s\n",con[i].name);}
			printf("*****************************************************************\n");
	}




	void sta(void)

	{
		int a,i,j;
		printf("*****************************************************************\n");
		printf("请输入你想统计的研究领域：\n");
		printf("1.应用物理系\n");
		printf("2.化学系\n");
		printf("3.造船系\n");




		printf("请输入您的选择:___");
			scanf("%d",&a);
			switch(a)
			{
			case 1:{load();
				for(i=0;i<N;i++)
					if(strcmp(con[i].cat,"应用物理系")==0)
						printf("姓名：%s  \n入学年份：%d  \n在校身份:%s  \n系别：%s  \n研究领域：\
			%s  \n简介：%s  \n主要成就：%s  \n主要成就：%s\n",con[i].name,con[i].entery,con[i].cat,con[i].status,
			con[i].area,con[i].intor,con[i].suc1,con[i].suc2);
				if(i==N) printf("信息库中无此类信息\n");break;}
			case 2:
				{load();
				for(i=0;i<N;i++)
					if(strcmp(con[i].cat,"化学系")==0)
						printf("姓名：%s  \n入学年份：%d  \n在校身份:%s  \n系别：%s  \n研究领域：\
			%s  \n简介：%s  \n主要成就：%s  \n主要成就：%s\n",con[i].name,con[i].entery,con[i].cat,con[i].status,
			con[i].area,con[i].intor,con[i].suc1,con[i].suc2);
				if(i==N) printf("信息库中无此类信息\n");break;}
			case 3:
				{load();
				for(i=0;i<N;i++)
					if(strcmp(con[i].cat,"造船系")==0)
						printf("姓名：%s  \n入学年份：%d  \n在校身份:%s  \n系别：%s  \n研究领域：\
			%s  \n简介：%s  \n主要成就：%s  \n主要成就：%s\n",con[i].name,con[i].entery,con[i].cat,con[i].status,
			con[i].area,con[i].intor,con[i].suc1,con[i].suc2);
				if(i==N) printf("信息库中无此类信息\n");}}
			printf("*****************************************************************\n");
	}