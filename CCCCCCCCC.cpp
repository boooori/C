#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	/*
	string str;
	
	cin >> str;
	
	cout << str;
	*/
	/*
	char str[1001];
	scanf("%[^\n]",str);
	for (int i = 0; str[i]; i++){
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
	}
	
	printf("%s",str);
	*/
	string str;
	
	getline(cin, str);
	for (int i = 0; str[i]; i++){
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
	}
	cout << str;
	return 0;	
}
