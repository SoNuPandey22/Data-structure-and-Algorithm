#include <iostream>
using namespace std;

void numberPatternTriangle(int n) {
	int i =0, p =0;
	int j=0, k =0, space = 0;
	for(i = 1; i <= n; i++){
		// print the space 
		for(space = 1; space <= n-i; space++) {
			cout<<" ";
		}
		// print
		for(j = 0; j < i; j++) {
			cout<<i+j;
		}
		// decrement order
		for(k = 1; k <= i -1; k++) {
			cout<<j+i-k-1;
		}
	
		cout<<endl;
	}
}




int main() {
    int n;
    cin>>n;
    numberPatternTriangle(n);


	return 0;
}