#include <stdio.h>

int main(){
		
	int H,M,m,tH,tM;
	
	scanf("%d %d",&H,&M);
	scanf("%d",&m);
	
	tH = m/60;
	tM = m -(tH*60);
	
	printf("%d %d", tH, tM);
	
	//A = (3600*A + 60*B + C)/ 3600 - (30*60+20);
	//B = (3600*A + 60*B + C) / 3600 / 60 ;
	/*
	B = B+C;
	
	if (B+C > 60){
		B = B+C - 60;
		A = A+1;
	}
	else if (A > 23){
		A = 0;
	}
	*/
	
	return 0;
}
