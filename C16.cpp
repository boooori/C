#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	/*
	int i,j,a;
	a = 0;
	int ar[6][9] = {{0,0,0,1,0,0,0,0,0},
					{0,0,0,0,0,0,0,2,0},
					{0,0,0,0,1,0,0,0,0},
					{0,2,0,1,0,0,1,0,0},
					{0,0,0,1,0,0,0,0,0},
					{0,0,1,0,0,0,1,0,0}};
	for(int i = 0;i<6;i++){
		for(int j = 0;j<9;j++){
			if (ar[i][j] != 0)
			{
				ar[i][j]=0;
			}
			else if (ar[i][j] == 0)
			{
				ar[i][j] = 1;
			}
			printf("%d",ar[i][j]);
		}
		printf("\n");
	}
	*/
	/*
	int a=0;
	scanf("%d",&a);
	int ar[6][6] = {{1,23,22,27,21,24},
					{2,21,22,25,24,23},
					{3,20,23,22,21,24},
					{4,25,26,24,27,28},
					{5,26,24,28,29,26},
					{6,27,28,29,26,27}};
	for(int i = 0;i<6;i++){
		for(int j = 0;j<6;j++){
			printf("%d ",ar[a-1][j]);
		}
	}
	*/
	int ar[6][6] = {0};
	int i,j;
	
	srand(time(NULL));
	
	for (i = 0; i<6; i++){
		for (j = 0; j< 6; j++){
			ar[i][j] = rand()%99+1;
		}
	}	
	i = 0;
	while(i<6){
		j= 0;
		while(j<6){
			printf("%3d",ar[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
