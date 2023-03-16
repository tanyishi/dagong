#include<stdio.h>
#include<string.h>
#include<math.h>
#include"Windows.h"
#include"1.h"
#include"change.h"
#define N 100
struct dagong 
	con[N],inf;
void main()
{
	void sta(void);
	void lu(void);
	void cha(void);
	void sort(void);
	int a;
	int q;
	char e;
	struct dagong inf;
	do{
	printf("                ★欢迎来到大工杰出校友录管理系统★\n");
	printf("*****************************************************************\n");
	printf("------------------------------菜单-----------------------------\n");
	printf("请输入您想进行的操作__\n");
	printf("1.录入校友数据。\n");
	printf("2查找某位校友的具体信息。\n");
	printf("3.对系统中的数据进行修改。\n");
	printf("4.希望进行排序。\n");
	printf("5.希望按照研究领域统计。\n");
	


	printf("*****************************************************************\n");
	printf("★温馨提醒★：\n");
	printf("1.在进行对话框的人机交互操作时，尽量不要选择使用搜狗输入法，可能会导致输出结果无法看见呦，\
推荐使用微软拼音，亲测有效\n");
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n");
	printf("2.在运行程序时，有时可能会出现\"\1>LINK : fatal error LNK1168: 无法打开 C:\Users\Huawei\documents\visual studio 2010\Projects\
	Debug\.exe 进行写入\"的情况，经过百度后查明  \"说明你的程序正在运行或 前一次运行关闭不正常\n\
	窗口虽然消失了但是进程还在，用任务管理器结束它即可\",所以可能出错的不是程序，建议尝试关闭vs后重新进入，实在不行就只能重启电脑了（百度上是这么说的）,为您的耐心点赞。\n");
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n");	
	printf("3.本程序目前仅支持录入和查找的校友信息为100人，目前已经录入了近30人，大工的辉煌是由今后的我们去努力创造的\n");
	


	printf("*****************************************************************\n");
	scanf("%d",&q);
	switch(q)
		{
	    case 1:lu();break;
		case 2:cha();break;
		case 3:change();break;
		case 4:sort();break;
		case 5:sta();break;
		default:printf("Data error!");}
	printf("您的操作已成功，如果您想退出的话，请输入字母'p'，输入其他字符则重新进入菜单选项\n");
	printf("*****************************************************************\n");
	getchar();}
while((e=getchar())!='p');
printf("本次操作结束，感谢您本次的使用\n");
printf("*****************************************************************\n");
}



/*对输入信息进行录入*/

	void lu(void)
	{
		void save(struct dagong *p);
		printf("*****************************************************************\n");
		printf("欢迎来到信息录入系统\n");
		getchar();
		printf("输入姓名:");
	    gets(inf.name);
		printf("请输入他的入学时间:");
		scanf("%d",&inf.entery);
		getchar();
		printf("请输入他的所处职位:");
		gets(inf.status);
		printf("请输入他所处的院系:");
		gets(inf.cat);
		printf("请输入他的研究领域:");
		gets(inf.area);
		printf("请输入他的简介:");
		gets(inf.intor);
		printf("请输入他的主要成就:");
		gets(inf.suc1);
		printf("请输入他的其他成就:");
		gets(inf.suc2);
		save(&inf);
		printf("*****************************************************************\n");
	}

/*查找校友信息*/
	void cha(void)
	{

		int i,j,p,a,b;
	   	void load(void);
		void chart(struct dagong o);
		char str[20];
		printf("欢迎来到校友信息查询系统\n");
		printf("*****************************************************************\n");
		load();
		getchar();
		printf("请在以下方式中选择一项：\n");
		printf("1.输入校友名字以查找校友信息。\n");
		printf("2.输入其在系统中所在的编号以查找信息。\n");
		scanf("%d",&a);
		if(a==1)
		{printf("请输入你要查找的校友姓名:");
		getchar();
		gets(str);
		for(i=0;i<N;i++)
			{if(strcmp(str,con[i].name)==0)
				{printf("查找成功\n");
		printf("他的信息是:");
		printf("姓名：%s  \n入学年份：%d  \n在校身份：%s  \n系别：%s  \n研究领域：\
			%s  \n简介：%s  \n主要成就：%s  \n主要成就：%s\n",con[i].name,con[i].entery,con[i].cat,con[i].status,
			con[i].area,con[i].intor,con[i].suc1,con[i].suc2);
		break;}
		if(i==N) printf("信息库中无此信息\n");
		printf("*****************************************************************\n");
		}}
		if(a==2)
		{printf("请输入你要查找的校友所在的序号:");
		scanf("%d",&b);
		printf("他的信息是:");
		printf("姓名：%s  \n入学年份：%d  \n在校身份：%s  \n系别：%s  \n研究领域：\
			%s  \n简介：%s  \n主要成就：%s  \n主要成就：%s\n",con[b-1].name,con[b-1].entery,con[b-1].cat,con[b-1].status,
			con[b-1].area,con[b-1].intor,con[b-1].suc1,con[b-1].suc2);
		if(i==N) printf("信息库中无此信息\n");
		printf("*****************************************************************\n");
		}}
	
/*对数据输入或改动后重新进行存储*/	  

	void save(struct dagong *p)
	{FILE *op;
	op=fopen("d:\\ma.txt","a");
	fwrite(p,sizeof(struct dagong),1,op);
	fclose(op);}



	