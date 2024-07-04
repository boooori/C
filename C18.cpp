#include <stdio.h>
void PrintArray(int ar[]);
void InputData(int *ar);

int main(){
	/*
	int ar[10] = {10,20,30,40,50,60,70,80,90,100};
	int i;
	
	
	
	/*
	*(ar+0) = 34;
	*(ar+1) = 21;
	for(i == 0 ; i<10 ; i++){
		printf("%d\n", *(ar+i));
	}
	*/
	/*
	int ar[3] ={1,2,3};
	int ar2[3][3] = {{1,2,3}, {4,5,6},{7,8,9} };
	
	printf("%d\n",ar);
	printf("%d\n",&ar[0]);
	
	printf("%d\n",ar2);
	printf("%d\n",&ar2[0][0]);
	
	printf("%d\n",&ar2[1][0]);
	*/
	/*
	int ar[3][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12} };
	int *p;
	int i;
	int len = sizeof(ar[0]) / sizeof(ar[0][0]);
	
	for(i = 0; i < len; i++){
		printf("%d ", *(ar[1]+i));
	}
	printf("\n");
	
	p = ar[2];
	
	for(i = 0; i<len;i++){
		printf("%d ",*(p+i));
	}
	printf("\n");
	*/
	int ar[5]={0};
	
	
	PrintArray(ar);
	InputData(ar);
	PrintArray(ar);
	
	return 0;
}
void PrintArray(int ar[]){
	int i = 0;
	for (i = 0 ; i< 5;i++){
		printf("%d",ar[i]);
	}
}
void InputData(int *ar){
	int i =0;
	for (i = 0;i<5;i++ ){
		scanf("%d",ar+i);
	}
}
