#include <stdio.h>

int main()
{
	/*
	int num;
	
	printf("숫자를 하나 입력해 주세요. : ");
	scanf("%d",&num);
	printf("입력 : %d\n", num);
	
	return 0; 
	*/
	/*
	double eye_r;
	double eye_l;
	
	printf("양쪽 시력을 입력하세요. : ");
	scanf("%lf %lf", &eye_r,&eye_l);
	printf("오른쪽 시력 : %lf\n왼쪽 시력: %lf",eye_r,eye_l);
	return 0;
	*/
	/*
	int a,b,c;
	
	printf("학년 반 번호를 입력해 주세요. : "); 
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("학년 : %d\n반 : %d\n번호 : %d",a,b,c);
	*/
	int m,a,cm,b;
	
	printf("m : ");
	scanf("%d",&m);
	scanf("%d",&a);
	printf("%dm는 %dcm입니다.",m,a);
	printf("cm : ");
	scanf("%.1lf",&cm);
	printf("%.1lfm는 %d * 1/100cm입니다.",cm);
	return 0;
}
	
