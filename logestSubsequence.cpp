//duplication detection is not save

#include <iostream>
#include <algorithm>
using namespace std;

int LS(int arr[], int n) {
  sort(arr, arr+n);
  int l = 1;
  int t = 1;
  for(int i = 0; i < n-1; ++i) {
  	if(arr[i] == arr[i+1] - 1) {
  		t++;
  		if(t > l) {
  			l =t;
  		}
  	} else {
  		t = 1;
  	}
  }
  return l;
}

int main(){
	int n; 
	cout<<"Ente the size of the array"<<endl;
	cin>>n;
    int arr[n];

    for(int i =0; i < n; ++i) {
    	cin>>arr[i];
    }

    cout<<"The longest subsequence in the array : "<<LS(arr, n)<<endl;

	return 0;
}