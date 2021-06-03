//remove the duplicate char from the char array
#include <bits/stdc++.h>
using namespace std;

void rD(char *s){
	int len = strlen(s);
	if(len == 0 || len == 1)
		return;
	int prev = 0;
	for(int curr =0; curr < len; curr++) {
		if(s[curr] != s[prev]){
			prev++;
			s[prev] = s[curr];

		}
	}
	s[prev + 1] = '\0';
}

int main() {
	char str[100];
	cin.getline(str, 100);

	rD(str);

	cout<<str;
	return 0;
}