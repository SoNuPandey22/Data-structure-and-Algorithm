#include <iostream>
using namespace std;


void wavesort(int *arr, int n) {
      for(int i = 0; i< n; i+=2) {
         //check for the left element 
	 if(i > 0 && arr[i-1] > arr[i]) {
            swap(arr[i-1], arr[i]);
	 }
	 //check for the right element
	 if(i <n-1 && arr[i+1] > arr[i]) {
            swap(arr[i +1], arr[i]);
	 }
      }  

}

int main() {
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	for(int i =0; i < n; i++) {
           cin>>arr[i];
	}
        cout<<"Before sorting the array :"<<endl;
	for(int i:arr) {
         cout<<i<<" ";
	}
	wavesort(arr,n);

	cout<<"after sorting the array : "<<endl;
	for(int i : arr){
         cout<<i<<" ";
	}
  

  return 0;
}
