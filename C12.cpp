#include <stdio.h>
/*
void plus()
{
	int a = 3;
	int b = 2;
	
	printf("%d",a+b);
	
}

int main()
{
	
	plus();
	
	return 0;
}
*/
/*
void plus(int num1, int num2)
{
	printf("%d\n",num1+num2);
	
}
int main()
{
	int a = 3;
	int b = 2;
	
	plus(a,b);
	plus(5,3);
	return 0;	
}
*/
/*
int plus()
{
	int a = 3;
	int b = 2;
	
	return a + b;
}
int main()
{
	int num = plus();
	
	printf("%d\n", num);
	printf("%d\n", plus());
	printf("%d\n", plus() + 10);
	return 0;
}
*/
/*
int plus(int num1,int num2)
{
	return num1 + num2;
	
}
int main()
{
	int a = 3;
	int b = 2;
	int num1 = plus(a,b);
	printf("%d\n", num1);
	
	num1 = plus(3,5);
	printf("%d\n",num1);
	
	num1 = plus(3,5);
	printf("%d\n",num1 + 10);
	return 0;
}
*/
int Sum(int n)
{
	int a = 0;
	for(int i = 1; i<=n;i++)
	{
		a = a+i;
	}
	return a;
}
int main()
{
	int n = 0;
	int result = 0;
	scanf("%d",&n);
	result = Sum(n);
	printf("%d", result);
	return 0;
}
