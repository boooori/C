#include <stdio.h>
#define MAX 10
#define PI 3.141592
#define C3C "씨큐브코딩"
#define PRN printf
#define MACRO "## 매크로 상수##\n"
#define SUM(n,m) ((n)+(m))
#define SUB(s,b) ((s)-(b))
/*
void PrintFun1(int m, int n);
void PrintFun2(int m, int n);
*/
/*
void Ccube();
void Coding();
*/

int main(){
	/*
	int a,b;
	
	a= 12;
	b=20;
	
	printf("a = %d, b = %d \n",a,b);
	{
		int a,c;
		
		a = 30;
		c = 50;
		printf("a = %d, b = %d, c = %d\n", a,b,c);
		
		a = 90;
		b = 45;
		c = 70;
	}
	
	printf("a = %d,b = %d \n",a,b);
	*/
	/*
	int m,n;
	
	m = 10;
	n = 30;
	
	
	printf("main before : m = %d n = %d\n",m,n);
	PrintFun1(m,n);
	printf("main after : m = %d n = %d\n",m,n);
	*/
	/*
	Ccube();
	Ccube();
	Ccube();
	Coding();
	Coding();
	Coding();
	*/
	PRN(MACRO);
	PRN("MAX = %d\n", MAX);
	PRN("PI = %lf\n", PI);
	PRN("C3C = %s\n", C3C);
	PRN("%d\n", SUM(3,8));
	PRN("%d\n", SUB(3.6,8.34));
	PRN("%d\n", SUB(13,5));
	PRN("%lf\n", SUB(4.2,3.4));
	
	return 0;
}
/*
void PrintFun1(int m,int n)
{
	printf("fun1 before : m = %d n = %d\n",m,n);
	m = m+50;
	n = n+10;
	PrintFun2(m,n);
	printf("main after : m = %d n = %d\n",m,n);
}

void PrintFun2(int m, int n)
{
	printf("Fun2 before : m = %d n = %d\n",m,n);
	m = m+50;
	n = n+10;
	printf("Fun2 after : m = %d n = %d\n",m,n);
}
*/
/*
void Ccube()
{
	int cnt = 0;
	
	cnt++;
	printf("%d 씨큐브\n", cnt);
}

void Coding()
{
	static int cnt = 0;
	
	cnt++;
	printf("%d 코딩\n",cnt);
}
*/
