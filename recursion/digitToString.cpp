#include <bits/stdc++.h>
using namespace std;

char arr[][10] = {"zero","one", "two", "three","four", "five", "six", "seven", "eight", "nine"};

void digitToString(int n) {
	if(n == 0)
		return;
	digitToString(n/10);
	int digit = n % 10;
	cout<<arr[digit]<<" ";
}


int main() {

	int n;
	cout<<"Enter a number: "<<endl;
	cin>>n; 
	digitToString(n);
	
	return 0;
	
}