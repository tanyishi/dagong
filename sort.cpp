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
		printf("��ӭ��������ϵͳ\n");
		printf("*****************************************************************\n");
		printf("����������ѡ��\n");
		printf("1.����ĸ˳���������\n");
		printf("2.����ѧʱ���������\n");
		printf("3.��֪���ȼ��Թ��ҹ��׶Ƚ�������");
		printf(" ע�������ݵ�׼ȷ���д���ߣ�ֻ�ǰ���Ӱ�����ĳ������򣬿��ܲ��ܴ���\
			   ��ʵ����������ο���ÿ��Ϊ������彨���������׵��˶�ֵ�������𾴣�����\n");
		printf("���������ѡ��___");
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
		printf("��Ϣ����ɹ�\n");
		for(i=0;i<N;i++)
			printf("%s\n",con[i].name);}
			if(f==1) 
	   { for(i=0;i<N-1;i++)
			for(j=0;j<N-i-1;j++)
				if(strcmp(con[j].name,con[j+1].name)>0)
				{strcpy(t,con[j].name);
		         strcpy(con[j].name,con[j+1].name);
				 strcpy(con[j+1].name,t);}
		printf("��Ϣ����ɹ�\n");
		for(i=0;i<N;i++)
			printf("%s\n",con[i].name);}
			if(f==3) 
	   { for(i=0;i<N-1;i++)
			for(j=0;j<N-i-1;j++)
				if(strlen(con[j].intor)>strlen(con[j+1].intor))
				{strcpy(t,con[j].name);
		         strcpy(con[j].name,con[j+1].name);
				 strcpy(con[j+1].name,t);}
		printf("��Ϣ����ɹ�\n");
		for(i=0;i<N;i++)
			printf("%s\n",con[i].name);}
			printf("*****************************************************************\n");
	}




	void sta(void)

	{
		int a,i,j;
		printf("*****************************************************************\n");
		printf("����������ͳ�Ƶ��о�����\n");
		printf("1.Ӧ������ϵ\n");
		printf("2.��ѧϵ\n");
		printf("3.�촬ϵ\n");




		printf("����������ѡ��:___");
			scanf("%d",&a);
			switch(a)
			{
			case 1:{load();
				for(i=0;i<N;i++)
					if(strcmp(con[i].cat,"Ӧ������ϵ")==0)
						printf("������%s  \n��ѧ��ݣ�%d  \n��У���:%s  \nϵ��%s  \n�о�����\
			%s  \n��飺%s  \n��Ҫ�ɾͣ�%s  \n��Ҫ�ɾͣ�%s\n",con[i].name,con[i].entery,con[i].cat,con[i].status,
			con[i].area,con[i].intor,con[i].suc1,con[i].suc2);
				if(i==N) printf("��Ϣ�����޴�����Ϣ\n");break;}
			case 2:
				{load();
				for(i=0;i<N;i++)
					if(strcmp(con[i].cat,"��ѧϵ")==0)
						printf("������%s  \n��ѧ��ݣ�%d  \n��У���:%s  \nϵ��%s  \n�о�����\
			%s  \n��飺%s  \n��Ҫ�ɾͣ�%s  \n��Ҫ�ɾͣ�%s\n",con[i].name,con[i].entery,con[i].cat,con[i].status,
			con[i].area,con[i].intor,con[i].suc1,con[i].suc2);
				if(i==N) printf("��Ϣ�����޴�����Ϣ\n");break;}
			case 3:
				{load();
				for(i=0;i<N;i++)
					if(strcmp(con[i].cat,"�촬ϵ")==0)
						printf("������%s  \n��ѧ��ݣ�%d  \n��У���:%s  \nϵ��%s  \n�о�����\
			%s  \n��飺%s  \n��Ҫ�ɾͣ�%s  \n��Ҫ�ɾͣ�%s\n",con[i].name,con[i].entery,con[i].cat,con[i].status,
			con[i].area,con[i].intor,con[i].suc1,con[i].suc2);
				if(i==N) printf("��Ϣ�����޴�����Ϣ\n");}}
			printf("*****************************************************************\n");
	}