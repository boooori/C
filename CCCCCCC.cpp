#include <cstdio>

int main(){
		/*
	int car[101][101] = {0, };
	int n,m;
	scanf("%d %d",&n,&m);
	
	for (int i = 0; i < m; i++){
		
		int from, to, car_temp;
		
		scanf("%d %d %d",&from,&to,&car_temp);
		
		if(car[from][to] == 0 || car [from][to] < car_temp)
			car[from][to] = car_temp;
			
	}
	
	int min_c = 0,max_dist = 0;
	
	for (int i = 0; i <= n; i++){
		
		int sum_in = 0,sum_out = 0;
		
		for (int j = 1; j <= n; j++){
			
			sum_in += car[j][i];
			sum_out += car[i][j];
			
		}
		if (sum_in > sum_out) printf("%d",i);
	}
	*/
	int a[100][100];
	int n,m;
	scanf("%d %d",&n,&m);
	int x,y;
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			
			scanf("%d",&a[i][j]);
			if (a[i][j] == 2){
				
				x = j;
				y = i;
			}
				
		}
			
	}
	while(!(a[y][x+1] && a[y+1][x])){

		if (a[y+1][x] == 0) y = y+1;
		else if (a[y][x+1] == 0) x = x+1;
	}
	printf("%d %d",x,y);
	
	return 0;
}
