#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	/*
	char *sp = "C3coding";
	char str[] = "C3coding";
	int res;
	
	res = strcmp(sp,str);
	printf("%d\n", res);
	res = strcmp(sp,"C3coding");
	printf("%d\n", res);
	res = strcmp("C3coding","C3coding");
	printf("%d\n", res);

	res = strcmp("test","text");
	printf("%d\n", res);
	res = strcmp("test","text");
	printf("%d\n", res);
	*/
	/*
	char start[15] = "C3";
	char end[10] = "coding";
	int len;
	
	printf("start = %s %d\n", start,strlen(start));
	printf("end = %s %d\n", end,strlen(end));
	
	strcat(start,end);
	len = strlen(start);
	printf("%s %d\n", start , len);
	*/
	
	int* p;
	
	p = (int*)malloc(sizeof(int) * 5);
	
	for (int i = 0; i < 5; i++)
	{
		p[i] = i;
		printf("%d",p[i]);
	}
	printf("\n");
	
	for (int i = 0; i<5;i++)
	{
		printf("%d",*p + i);
	}
	
	free(p);
	
}
