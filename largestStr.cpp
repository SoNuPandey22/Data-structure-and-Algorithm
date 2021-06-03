#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n; //no of strings
	cin>>n;

	char str[1000];
	char largestStr[1000];

	cin.get(); //consume the extra space of the string array

    int len = 0;
    int largestLen = 0;
	for(int i = 0; i < n; i++) {
		cin.getline(str, 1000);
		len = strlen(str);
		if(len > largestLen) {
			largestLen = len;
			strcpy(largestStr, str);
		}

	}
	cout<<largestStr<<" : &  len = "<<largestLen<<endl;
	return 0;
}