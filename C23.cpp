#include <stdio.h>
#include <conio.h>

int main(){
	/*
	int a, b, c;
	
	scanf("%d", &a);
	printf("a = %d\n",a);
	scanf("%d%d", &a, &b);
	printf("a = %d b = %d\n", a, b);
	scanf("%d%d%d", &a, &b, &c);
	printf("a = %d b = %d c = %d\n", a, b, c);
	*/
	/*
	int a;
	char b;
	
	scanf("%d",&a);
	getchar();
	scanf("%c",&b);
	printf("%d %c",a , b);
	*/
	/*
	char str1[15],str2[20];
	
	scanf("%s%s", str1,str2);
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	*/
	/*
	char str[80];
	
	gets(str);
	printf("%s\n",str);
	puts(str);
	*/
	/*
	char ch;
	
	ch = _getche();
	printf("\nch = %d : %c\n", ch, ch);
	putchar(ch);
	*/
	/*
	int n = 0;
	
	while (1)
	{
		printf("%d%c",n,'\r');
		n=n+10000;
	}
	*/
	char str[20];
	
	scanf("%s",str);
	
	for(int i = 0; str[i]!='\0'; i++){
		if(str[i]>='A' && str[i]<='Z')
			printf("%c",str[i]);
	}
	return 0;
}
