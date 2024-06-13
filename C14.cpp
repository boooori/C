#include <stdio.h>

int main(){
	/*
	char ch1,ch2;
	
	ch1 = 'A';
	ch2 = 'a';
	printf("%d \n",ch1 + 32);
	printf("%c \n",ch1 + 32);
	printf("%d \n",ch2 - 32);
	printf("%c \n",ch2 - 32);
	return 0;
	*/
	/*
	char ch;
	
	printf("문자를 입력하세요: ");
	
	scanf("%c",&ch);
	printf("%c %d\n",ch,ch);
	
	ch = getchar();
	putchar(ch);
	*/
	/*
	char str1[ ]={'H','i',' ','C','3',' ','C','o','d','i','n','g'};
	char str2[ ]={'H','i',' ','C','3',' ','C','o','d','i','n','g','\0'};
	
	printf("%s\n",str1);
	printf("%s\n",str2);
	return 0;
	return 0;
	*/
	/*
	char str1[15] = "Coding is fun";
	char str2[] = "Coding is fun";
	
	printf("%s\n", str1);
	printf("%s\n",str2);
	*/
	/*
	char word[20];
	
	printf("단어를 입력하세요 : ");
//	scanf("%s",word);
//	printf("입력하신 단어는 %s 입니다",word);
	gets(word);
	puts(word);
	*/
	
	char str[15] = "Hi C3 coding";
	int i = 0;
	while(1){
		if(str[i]=='\0')
			break;
		printf("%c ", str[i]);
		i++;
	}
	return 0;
}
