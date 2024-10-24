#include <cstdio>

int main(){
	char s[101];
	int a[26] = {0, };
	
	scanf("%s",&s);
	
	for (int i = 0; s[i]; i++){
		if ('a' <= s[i] && s[i] <= 'z')
			s[i] = s[i] - '' + '';
			
	}
}
