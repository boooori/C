#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	FILE *fp = fopen("datafile.txt","w");
	
	if (fp == NULL)
	{
		printf("������ �����ϴ�.");
		exit(1);
	}
	fclose(fp);
	*/
	/*
	FILE *out = fopen("StringFile.txt", "w");
	char str1[] = "Hello C3Coding";
	char str2[] = "�ȳ��ϼ��� ��ť���ڵ��Դϴ�.\n";
	
	/*
	fp = fopen("CharOut.txt","w");
	
	if (fp == NULL)
	{
		printf("������ �����ϴ�.");
		exit(1);
	}
	
	fputc(65,fp);
	fputc(66,fp);
	fputc('\n',fp);
	fputc(99,fp);
	fputc(100,fp);
	*/
	/*
	char ch;
	
	fp = fopen("CharOut.txt", "r");
	
	if (fp == NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	
	ch = fgetc(fp);
	printf("%c", ch);
	ch = fgetc(fp);
	putchar(ch);
	
	ch = fgetc(fp);
	printf("%c", ch);
	ch = fgetc(fp);
	putchar(ch);
	*/
	/*
	if (out == NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	
	fputs("���ڿ��� ����մϴ�.\n",out);
	fputs(str1, out);
	fputs("\n", out);
	fputs(str2, out);
	*/
	/*
	FILE *in = fopen("StringFile.txt","r");
	char str1[30];
	char str2[30];
	char str3[30];
	
	if (in == NULL)
	{
		printf("���Ͼ���\n");
		exit(1);
	}
	fgets(str1, sizeof(str1), in);
	fgets(str2, sizeof(str2), in);
	fgets(str3, sizeof(str3), in);
	
	puts(str1);
	printf("%s", str2);
	
	fputs(str3, stdout);
	*/
	
	FILE *out = fopen("NumberFile.txt","w");
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
	printf(">>>>>>>>>>>>>>>>>>>>>>\n");
	printf("�� �ֿܼ��� ã������?");
	
	fprintf(out, "%d %d\n", n,m);
	fprintf(out, "%lf %lf", d1,d2);
	
	fclose(out);
	
	return 0;
}
