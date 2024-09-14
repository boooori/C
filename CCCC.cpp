#include <stdio.h>

int main(){
	int N,K;
	int i,j;
	int count = 0;
	
	scanf("%d",&N);
	scanf("%d",&K);
	
	for (i = 1;i<=N;i++)
	{	
		if (N % i == 0){
			count++;

			if (count == K){
				printf("%d",i);
				break;		
			}
		}
	}
	if (count < K){
		printf("%d",0);
	}
	return 0;
}
