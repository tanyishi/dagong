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
		printf("��ӭ������Ϣ�޸�ϵͳ\n");
		printf("*****************************************************************\n");
		printf("------------------------------�˵�-----------------------------\n");
	    printf("������������еĲ���__\n");
	    printf("1.����У�����ָı���Ӧ��Ϣ��\n");
		printf("2.����У����Ÿı���Ӧ��Ϣ��\n");
		fflush(stdin); 
		scanf("%d",&a);
		if(a==1) 
		{    
		printf("������У������___");
		getchar();
		gets(str);
		load();
		for(i=0;i<N;i++)
			if(strcmp(str,con[i].name)==0)
				{printf("���������������й���Ϣ");
		printf("��������:");
		fflush(stdin);     
	    gets(con[i].name);
		printf("������������ѧʱ��:");
		scanf("%d",&con[i].entery);
		getchar();
		printf("��������������ְλ:");
		gets(con[i].status);
		printf("��������������Ժϵ:");
		gets(con[i].cat);
		printf("�����������о�����:");
		gets(con[i].area);
		printf("���������Ľ���:");
		gets(con[i].intor);
		printf("������������Ҫ�ɾ�:");
		gets(con[i].suc1);
		printf("���������������ɾ�:");
		gets(con[i].suc2);
		printf("��Ϣ�޸ĳɹ�\n");
		save2(con);
		break;
		}
	    if(i==N) printf("��Ǹ����Ϣ�����޴���Ϣ�����ڲ˵�ѡ����ѡ�� 1 ������Ϣ¼��\n");}
		if(a==2)
		{printf("�������������___");
		scanf("%d",&j);
		load();
		{printf("���������������й���Ϣ");
		getchar();
		printf("��������:");
	    gets(con[j-1].name);
		printf("������������ѧʱ��:");
		scanf("%d",&con[j-1].entery);
		getchar();
		printf("��������������ְλ:");
		gets(con[j-1].status);
		printf("��������������Ժϵ:");
		gets(con[j-1].cat);
		printf("�����������о�����:");
		gets(con[j-1].area);
		printf("���������Ľ���:");
		gets(con[j-1].intor);
		printf("������������Ҫ�ɾ�:");
		gets(con[j-1].suc1);
		printf("���������������ɾ�:");
		gets(con[j-1].suc2);
		printf("��Ϣ�޸ĳɹ�\n");
		save2(con);
		}}
	}