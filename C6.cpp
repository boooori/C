#include <stdio.h>

int main()
{
	/*
	int a,b;
	
	a = 20;
	b = 5;
	
	a += b;
	printf("a = %d\n", a);
	a *= b;
	printf("a = %d\n", a);
	a -= b;
	printf("a = %d\n", a);
	a /= b;
	printf("a = %d\n", a);
	a %= b;
	printf("a = %d\n", a);
	*/
	/*
	int a = 10;
	
	a++;
	a++;
	printf("a = %d\n", a);
	++a;
	++a;
	printf("a = %d\n",a);
	a--;
	printf("a = %d\n", a);
	--a;
	printf("a = %d\n", a);
	*/
	/*
	int num1 = 10;
	int num2 = 20;
	
	int num3 = ++num1 + num2++;
	
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("num3 = %d\n", num3);
	*/
	/*
	int a = 20;
	
	a += 4;
	printf("a = %d\n", a);
	a /= 2;
	printf("a = %d\n", a);
	a--;
	printf("a = %d\n", a);
	a *= a;
	printf("a = %d\n", a);
	*/
	/*
	int a = 10;
	int b = 2;
	
	a -= b;
	printf("a = %d\n", a);
	a *= b;
	printf("a = %d\n", a);
	a--;
	printf("a = %d\n", a);
	a /= a;
	printf("a = %d\n", a);
	a += b;
	printf("a = %d\n", a);
	a++;
	printf("a = %d\n", a);
	a /= b;
	printf("a = %d\n", a);
	*/
	
	int a = 12;
	int b = 3;
	
	a -= b++;
	printf("a = %d b = %d\n", a, b);
	a /= --b;
	printf("a = %d b = %d\n", a, b);
	a += b++;
	printf("a = %d b = %d\n", a, b);
	a -= ++b;
	printf("a = %d b = %d\n", a, b);
	a += --b
	;
	printf("a = %d b = %d\n", a, b);
	
	
	
	return 0;
 } 
