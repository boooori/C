#include <stdio.h>

void add(int* num1,int* num2);
void Input(int*,int*);
void AddNum(int*, int*);
void SubNum(int*, int*);
void MulNum(int*, int*);
void DivNum(int*, int*);
int main(){
	// &�� ������ �ּҰ� 
	// *�� �ּҰ� �տ� �����̸� ���� �����´�.
	/*
	char ch = 'A';
	
	char * pch;
	pch = &ch;
	// *�� �տ� ���̸� �������� ������ ��.
	// &�� �տ� ���̸� �ּ� ���� ���� �˰� ��. 
	printf("%p\n",pch);
	
	printf("%c\n",*pch);
	*/
	/*
	int number1 = 5;
	int number2 = 10;
	
	add(number1, number2);
	
	printf("number1 = %d\n", number1);
	printf("number2 = %d\n", number2);
	*/
	/*
	int number1 = 5;
	int number2 = 10;
	
	add(&number1,&number2);
	
	printf("number1 = %d\n", number1);
	printf("number2 = %d\n", number2);
	*/
	/*
	int a,b;
	int add,sub,mul,div;
	int *pa,*pb;
	
	pa = &a;
	pb = &b;
	
	pa = &a;
	pb = &b;
	
	a = 30;
	b = 55;
	add = *pa + *pb;
	printf("add = %d\n", add);
	
	*pa = 9;
	*pb = 7;
	sub = *pa - *pb;
	printf("sub = %d\n", sub);
	
	*pa = 12;
	b = 3;
	mul = *pa * *pb;
	printf("mul = %d\n",mul);
	
	a = 45;
	*pb = 5;
	div = *pa / *pb;
	printf("div = %d\n",div);
	*/
	int a,b;
	int *pa, *pb;
	
	pa = &a;
	pb = &b;
	
	Input(pa, pb);
	AddNum(pa, pb);
	SubNum(&a, &b);
	MulNum(pa, pb);
	DivNum(pa, pb);
	return 0;
}
void Input(int* a,int* b){
	printf("���� �Է�: ");
	scanf("%d %d", a, b);
}
void AddNum(int* a,int* b){
	printf("%d + %d = %d\n", *a, *b,*a + *b);
}
void SubNum(int* a,int* b){
	printf("%d - %d = %d\n", *a, *b,*a - *b);
}
void MulNum(int* a,int* b){
	printf("%d * %d = %d\n", *a, *b,*a * *b);
}
void DivNum(int* a,int* b){
	printf("%d / %d = %d\n", *a, *b,*a / *b);
}
/*
void add(int* num1, int* num2){
	*num1 = *num1 + 10;
	*num2 = *num2 + 10;
}
*/
