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
	printf("                �ﻶӭ�����󹤽ܳ�У��¼����ϵͳ��\n");
	printf("*****************************************************************\n");
	printf("------------------------------�˵�-----------------------------\n");
	printf("������������еĲ���__\n");
	printf("1.¼��У�����ݡ�\n");
	printf("2����ĳλУ�ѵľ�����Ϣ��\n");
	printf("3.��ϵͳ�е����ݽ����޸ġ�\n");
	printf("4.ϣ����������\n");
	printf("5.ϣ�������о�����ͳ�ơ�\n");
	


	printf("*****************************************************************\n");
	printf("����ܰ���ѡ\n");
	printf("1.�ڽ��жԻ�����˻���������ʱ��������Ҫѡ��ʹ���ѹ����뷨�����ܻᵼ���������޷������ϣ�\
�Ƽ�ʹ��΢��ƴ�����ײ���Ч\n");
	printf("�������������������������������������������������������������\n");
	printf("2.�����г���ʱ����ʱ���ܻ����\"\1>LINK : fatal error LNK1168: �޷��� C:\Users\Huawei\documents\visual studio 2010\Projects\
	Debug\.exe ����д��\"������������ٶȺ����  \"˵����ĳ����������л� ǰһ�����йرղ�����\n\
	������Ȼ��ʧ�˵��ǽ��̻��ڣ����������������������\",���Կ��ܳ���Ĳ��ǳ��򣬽��鳢�Թر�vs�����½��룬ʵ�ڲ��о�ֻ�����������ˣ��ٶ�������ô˵�ģ�,Ϊ�������ĵ��ޡ�\n");
	printf("�������������������������������������������������������������\n");	
	printf("3.������Ŀǰ��֧��¼��Ͳ��ҵ�У����ϢΪ100�ˣ�Ŀǰ�Ѿ�¼���˽�30�ˣ��󹤵ĻԻ����ɽ�������ȥŬ�������\n");
	


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
	printf("���Ĳ����ѳɹ�����������˳��Ļ�����������ĸ'p'�����������ַ������½���˵�ѡ��\n");
	printf("*****************************************************************\n");
	getchar();}
while((e=getchar())!='p');
printf("���β�����������л�����ε�ʹ��\n");
printf("*****************************************************************\n");
}



/*��������Ϣ����¼��*/

	void lu(void)
	{
		void save(struct dagong *p);
		printf("*****************************************************************\n");
		printf("��ӭ������Ϣ¼��ϵͳ\n");
		getchar();
		printf("��������:");
	    gets(inf.name);
		printf("������������ѧʱ��:");
		scanf("%d",&inf.entery);
		getchar();
		printf("��������������ְλ:");
		gets(inf.status);
		printf("��������������Ժϵ:");
		gets(inf.cat);
		printf("�����������о�����:");
		gets(inf.area);
		printf("���������ļ��:");
		gets(inf.intor);
		printf("������������Ҫ�ɾ�:");
		gets(inf.suc1);
		printf("���������������ɾ�:");
		gets(inf.suc2);
		save(&inf);
		printf("*****************************************************************\n");
	}

/*����У����Ϣ*/
	void cha(void)
	{

		int i,j,p,a,b;
	   	void load(void);
		void chart(struct dagong o);
		char str[20];
		printf("��ӭ����У����Ϣ��ѯϵͳ\n");
		printf("*****************************************************************\n");
		load();
		getchar();
		printf("�������·�ʽ��ѡ��һ�\n");
		printf("1.����У�������Բ���У����Ϣ��\n");
		printf("2.��������ϵͳ�����ڵı���Բ�����Ϣ��\n");
		scanf("%d",&a);
		if(a==1)
		{printf("��������Ҫ���ҵ�У������:");
		getchar();
		gets(str);
		for(i=0;i<N;i++)
			{if(strcmp(str,con[i].name)==0)
				{printf("���ҳɹ�\n");
		printf("������Ϣ��:");
		printf("������%s  \n��ѧ��ݣ�%d  \n��У��ݣ�%s  \nϵ��%s  \n�о�����\
			%s  \n��飺%s  \n��Ҫ�ɾͣ�%s  \n��Ҫ�ɾͣ�%s\n",con[i].name,con[i].entery,con[i].cat,con[i].status,
			con[i].area,con[i].intor,con[i].suc1,con[i].suc2);
		break;}
		if(i==N) printf("��Ϣ�����޴���Ϣ\n");
		printf("*****************************************************************\n");
		}}
		if(a==2)
		{printf("��������Ҫ���ҵ�У�����ڵ����:");
		scanf("%d",&b);
		printf("������Ϣ��:");
		printf("������%s  \n��ѧ��ݣ�%d  \n��У��ݣ�%s  \nϵ��%s  \n�о�����\
			%s  \n��飺%s  \n��Ҫ�ɾͣ�%s  \n��Ҫ�ɾͣ�%s\n",con[b-1].name,con[b-1].entery,con[b-1].cat,con[b-1].status,
			con[b-1].area,con[b-1].intor,con[b-1].suc1,con[b-1].suc2);
		if(i==N) printf("��Ϣ�����޴���Ϣ\n");
		printf("*****************************************************************\n");
		}}
	
/*�����������Ķ������½��д洢*/	  

	void save(struct dagong *p)
	{FILE *op;
	op=fopen("d:\\ma.txt","a");
	fwrite(p,sizeof(struct dagong),1,op);
	fclose(op);}



	