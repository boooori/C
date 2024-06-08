#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	/*
	int height[4];
	int i;
	height[0] = 23;
	height[1] = 48;
	scanf("%d",&height[2]);
	scanf("%d",&height[3]);
	for(i = 0; i<4;i++){
		printf("%d\n",height[i]);
	}
	
		
	*/
	/*
	int i,j,k;
	int ar[10] = {10,20,30,40,50,60,70,80,90,100};
	int br[10] = {};
	int arr[] = {10,20,30,40,50,60,70,80,90,100};
	for(i = 0; i<10;i++){
		printf("%d\n",ar[i]);
	}
	for(j = 0; j<10;j++){
		printf("%d\n",br[j]);
	}
	for(k = 0; k<10; k++){
		printf("%d\n",arr[k]);
	}
	*/
	/*
	int i;
	int ar[10] = {10,20,30,40,50,60,70,80,90,100};
	int br[10] = {11,21,31,41,51,61,71,81,91,101};

	for(i = 0;i<10;i++){
		int temp = ar[i];
		ar[i] = br[i];
		br[i] = temp;
	}
	for(i = 0;i<10;i++){
		printf("%d\n",ar[i]);
	}

	for(i = 0;i<10;i++){
		printf("%d\n
		",br[i]);
	}
	*/
	/*
	char c; int i; long l; float f; double d;
	
	printf("%d %d %d %d %d\n", sizeof(c),sizeof(i),sizeof(l),sizeof(f),sizeof(d));
	printf("%d %d %d\n", sizeof(char),sizeof(int),sizeof(long));
	printf("%d %d\n", sizeof(3),sizeof(5,2));
	*/
	/*
	int ar[10];
	int br[] = {1,2,3,4,5};
	double dr[20];
	
	printf("%d,%d,%d",sizeof(ar),sizeof(br),sizeof(dr));
	printf("%d",sizeof(ar[0]));
	printf("%d",sizeof(ar)/sizeof(ar[0]));
	*/
	/*
	int ar[10];
	int i,sum = 0;
	srand(time(NULL));
	
	for(i=0;i<sizeof(ar)/sizeof(ar[0]);i++){
		ar[i]=rand()%9+1;
		printf("%d",ar[i]);
		sum+=ar[i];
	}
	printf("\nÇÕÀº : %d\n",sum);
	*/
	int i;
	float ar[10];
	srand(time(NULL));
	
	for(i = 0;i<sizeof(ar)/sizeof(ar[0]);i++){
		ar[i]=(rand()%9+1)/10.0;
		printf("%.1f",ar[i]);
		
	}
	return 0;
}
