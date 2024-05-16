#include <stdio.h>
int main()
{
	/*
	int n;
	n = 2;
	switch(5)
	{
		case 0:
			printf("영입니다.");
			break;
		case 1:
			printf("일입니다.");
			break;
		case 2:
			printf("이입니다.");
			break;
		case 3:
			printf("삼입니다.");
			break;
		default:
			printf("전부 아닙니다.");
			break; 
	}
	*/
	int n;
	n = 0;
	scanf("%d",&n);
	switch(n/10)
	{
		case 0:
			printf("유소년");
			break; 
			
		case 1:
			printf("청소년");
			break;
		case 2:
			
		case 3:
			printf("청년");
			break;
		case 4:
			
		case 5:
			printf("중년");
			break;
		case 6:
			printf("장년");
			break;
		case 7:
			
		case 8:
			printf("노년");
			break;
		case 9:
			printf("도전 백세");
			break;
		default:
			printf("성공 백세");
			break; 
	}
	return 0;
}
