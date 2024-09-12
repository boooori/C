#include <stdio.h>
/*
int main(){
	int N;
	int Ai;
	int a;
	
	scanf("%d",&N);
	
	for (int i = 0;i < N;i++){
		scanf("%d",&Ai);
		a = a + 1;
	}
	
	a = a/N;
	
	if (a<80){
		printf("easy");
	}
	else if (a<60){
		printf("normal");
	}
	else if (a<59){
		printf("hard");
	}
	*/
int Ai[1000001];
bool prime(int n){
	for(int i = 2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}
int main()
{
	/*
	int N,i,j, Bi;
	int count=0;
	
	scanf("%d",&N);
	
	for(i=0; i<N; i++){
		scanf("%d",&Ai[i]);
	}
	for (j = 0;j<N;j++){
		scanf("%d",&Bi);
		if (Ai[j] == Bi){
			count++;
		}
	}
	printf("%d",count);
	*/
	
	//(못품)소수찾기 *백준 1978번----
	//                               |
	//                               |
	//								|				
	/*								|
	int N,M,j,i;					|
	int count = 0;<<<<<<<<<<<<<<<<<|
	
	scanf("%d",&N);
	scanf("%d",&M);
	
	for (i = 0;i <= N;i++){
	
		for (j = 2;j*j<=i;j++){
			if((i%j)==0){
				count++;
			}
		}
	}
	*/
	int n, cnt = 0;
	
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		int x;
		scanf("%d",&x);
		if(x==1)
			continue;
		if(prime(x))
			cnt++;
	} 
	
	printf("%d",cnt);
	return 0;
	
}

