#include <stdio.h>
int main()
{
	/*
	int n;
	n = 2;
	switch(5)
	{
		case 0:
			printf("���Դϴ�.");
			break;
		case 1:
			printf("���Դϴ�.");
			break;
		case 2:
			printf("���Դϴ�.");
			break;
		case 3:
			printf("���Դϴ�.");
			break;
		default:
			printf("���� �ƴմϴ�.");
			break; 
	}
	*/
	int n;
	n = 0;
	scanf("%d",&n);
	switch(n/10)
	{
		case 0:
			printf("���ҳ�");
			break; 
			
		case 1:
			printf("û�ҳ�");
			break;
		case 2:
			
		case 3:
			printf("û��");
			break;
		case 4:
			
		case 5:
			printf("�߳�");
			break;
		case 6:
			printf("���");
			break;
		case 7:
			
		case 8:
			printf("���");
			break;
		case 9:
			printf("���� �鼼");
			break;
		default:
			printf("���� �鼼");
			break; 
	}
	return 0;
}
