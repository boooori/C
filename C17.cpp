#include <stdio.h>

void add(int* num1,int* num2);
void Input(int*,int*);
void AddNum(int*, int*);
void SubNum(int*, int*);
void MulNum(int*, int*);
void DivNum(int*, int*);
int main(){
	// &는 변수의 주소값 
	// *은 주소값 앞에 별붙이면 값을 가져온다.
	/*
	char ch = 'A';
	
	char * pch;
	pch = &ch;
	// *을 앞에 붙이면 포인터형 변수가 됨.
	// &을 앞에 붙이면 주소 안의 값을 알게 됨. 
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
	printf("정수 입력: ");
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
