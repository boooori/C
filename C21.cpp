#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	fp = fopen("CharOut.txt","w");
	
	if (fp == NULL)
	{
		printf("파일이 없습니다.");
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
		printf("파일없음\n");
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
	char str2[] = "안녕하세요 씨큐브코딩 입니다.\n";
	
	if (out == NULL);
	{
		printf("파일 없음.\n");
		exit(1);
	}
	
	fputs("문자열을 출력합니다.\n",out);
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
		printf("파일 없음\n");
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
		printf("파일없음\n");
		exit(1);
	}
	printf("정수를 두개 입력하세요: ");
	scanf("%d %d",&n,&m);
	printf("실수를 두개 입력하세요: ");
	scanf("%lf %lf",&d1,&d2);
	
	printf("\n\n\n 입력 받은 수들은 모두 출력되었습니다.\n");
	printf(">>>>>>>>>>>>>>>>>>>>\n");
	printf("왜 콘솔에서 찾으세요?");
	
	fprintf(out, "%d %d\n", n,m);
	fprintf(out, "%lf %lf", d1,d2);
	*/
	/*
	FILE *in = fopen("NumberFile.txt","w");
	int n, m;
	double d1, d2;
	
	if (in == NULL)
	{
		printf("파일없음\n");
		exit(1);
	}
	printf("정수를 두개 입력하세요: ");
	fscanf(in,"%d %d",&n,&m);
	printf("실수를 두개 입력하세요: ");
	fscanf(in,"%lf %lf",&d1,&d2);
	
	printf("\n입력 받은 수들은 모두 출력되었습니다.\n");
	printf("%d %d",n,m);
	printf("%lf %lf",d1,d2);
	printf(">>>>>>>>>>>>>>>>>>>>\n");
	printf("어디에서 입력 받았을까요?");
	*/
	fclose(fp);	
	return 0;
}
