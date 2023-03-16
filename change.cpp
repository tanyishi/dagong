#include"stdio.h"
#include"string.h"
#define N 100
#include"1.h"
#include"change.h"
extern struct dagong inf;
extern struct dagong con[100];

void load(void)
	{FILE *op;
	if((op=fopen("ma.txt","r"))==NULL)
		printf("Can't open the file.");
	fread(con,sizeof(struct dagong),N,op);
	fclose(op);
	}
void save2(struct dagong *p)
	{FILE *op;
	op=fopen("ma.txt","w");
	fwrite(p,sizeof(struct dagong),N,op);
	fclose(op);}
void change(void)
	{
		int a,i,j;
		char str[20];
		printf("欢迎来到信息修改系统\n");
		printf("*****************************************************************\n");
		printf("------------------------------菜单-----------------------------\n");
	    printf("请输入您想进行的操作__\n");
	    printf("1.根据校友名字改变相应信息。\n");
		printf("2.根据校友序号改变相应信息。\n");
		fflush(stdin); 
		scanf("%d",&a);
		if(a==1) 
		{    
		printf("请输入校友名字___");
		getchar();
		gets(str);
		load();
		for(i=0;i<N;i++)
			if(strcmp(str,con[i].name)==0)
				{printf("请重新输入他的有关信息");
		printf("输入姓名:");
		fflush(stdin);     
	    gets(con[i].name);
		printf("请输入他的入学时间:");
		scanf("%d",&con[i].entery);
		getchar();
		printf("请输入他的所处职位:");
		gets(con[i].status);
		printf("请输入他所处的院系:");
		gets(con[i].cat);
		printf("请输入他的研究领域:");
		gets(con[i].area);
		printf("请输入他的介绍:");
		gets(con[i].intor);
		printf("请输入他的主要成就:");
		gets(con[i].suc1);
		printf("请输入他的其他成就:");
		gets(con[i].suc2);
		printf("信息修改成功\n");
		save2(con);
		break;
		}
	    if(i==N) printf("抱歉，信息库中无此信息，请在菜单选项中选择 1 进行信息录入\n");}
		if(a==2)
		{printf("请输入他的序号___");
		scanf("%d",&j);
		load();
		{printf("请重新输入他的有关信息");
		getchar();
		printf("输入姓名:");
	    gets(con[j-1].name);
		printf("请输入他的入学时间:");
		scanf("%d",&con[j-1].entery);
		getchar();
		printf("请输入他的所处职位:");
		gets(con[j-1].status);
		printf("请输入他所处的院系:");
		gets(con[j-1].cat);
		printf("请输入他的研究领域:");
		gets(con[j-1].area);
		printf("请输入他的介绍:");
		gets(con[j-1].intor);
		printf("请输入他的主要成就:");
		gets(con[j-1].suc1);
		printf("请输入他的其他成就:");
		gets(con[j-1].suc2);
		printf("信息修改成功\n");
		save2(con);
		}}
	}