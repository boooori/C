#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	fp = fopen("CharOut.txt","w");
	
	if (fp == NULL)
	{
		printf("������ �����ϴ�.");
		exit(1);
	}
	
	fputc('A',fp);
	fputc('B',fp);
	fputc('\n',fp);
	fputc(97,fp);
	fputc(98,fp);
	/*
	FILE *fp;
	char ch;
	
	fp = fopen("CharFile.txt","r");
	
	if (fp == NULL);
	{
		printf("���Ͼ���\n");
		exit(1);
	}
	ch = fgetc(fp);
	printf("%c",fp);
	ch = fgetc(fp);
	putchar(ch);
	*/
	
	/*
	FILE *out = fopen("StringFile.txt","r");
	char str1[] = "Hello C3coding";
	char str2[] = "�ȳ��ϼ��� ��ť���ڵ� �Դϴ�.\n";
	
	if (out == NULL);
	{
		printf("���� ����.\n");
		exit(1);
	}
	
	fputs("���ڿ��� ����մϴ�.\n",out);
	fputs(str1, out);
	fputs("\n", out);
	fputs(str2, out);
	*/
	/*
	FILE *in = fopen("StringFile.txt","w");
	char str1[30];
	char str2[30];
	char str3[30];
	
	if (in == NULL);
	{
		printf("���� ����\n");
		exit(1);
	}
	
	fgets(str1, sizeof(str1), in);
	fgets(str2, sizeof(str2), in);
	fgets(str3, sizeof(str3), in);
	
	puts(str1);
	printf("%s",str2);
	
	fputs(str3, stdout);
	*/
	/*
	FILE *out = fopen("umberFile.txt","w");
	int n, m;
	double d1, d2;
	
	if (out == NULL)
	{
		printf("���Ͼ���\n");
		exit(1);
	}
	printf("������ �ΰ� �Է��ϼ���: ");
	scanf("%d %d",&n,&m);
	printf("�Ǽ��� �ΰ� �Է��ϼ���: ");
	scanf("%lf %lf",&d1,&d2);
	
	printf("\n\n\n �Է� ���� ������ ��� ��µǾ����ϴ�.\n");
	printf(">>>>>>>>>>>>>>>>>>>>\n");
	printf("�� �ֿܼ��� ã������?");
	
	fprintf(out, "%d %d\n", n,m);
	fprintf(out, "%lf %lf", d1,d2);
	*/
	/*
	FILE *in = fopen("NumberFile.txt","w");
	int n, m;
	double d1, d2;
	
	if (in == NULL)
	{
		printf("���Ͼ���\n");
		exit(1);
	}
	printf("������ �ΰ� �Է��ϼ���: ");
	fscanf(in,"%d %d",&n,&m);
	printf("�Ǽ��� �ΰ� �Է��ϼ���: ");
	fscanf(in,"%lf %lf",&d1,&d2);
	
	printf("\n�Է� ���� ������ ��� ��µǾ����ϴ�.\n");
	printf("%d %d",n,m);
	printf("%lf %lf",d1,d2);
	printf(">>>>>>>>>>>>>>>>>>>>\n");
	printf("��𿡼� �Է� �޾������?");
	*/
	fclose(fp);	
	return 0;
}
