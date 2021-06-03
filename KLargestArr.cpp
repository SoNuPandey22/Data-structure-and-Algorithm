#include <iostream>
#include <queue>
using namespace std;


int LargestKthElement(int arr[], int n , int k) {
  priority_queue<int>maxheap;
  for(int i =0; i < n; i++) {
    maxheap.push(arr[i]);
    if(maxheap.size() > k)
    {
	    maxheap.pop();
	    return maxheap.top();
    }
  }
}

int main() {
 int n;
 cout<<"Enter the size of the array :"<<endl;
 cin>>n;
 int arr[n];
 cout<<"Enter the elemeents of the array"<<endl;
 for(int i =0; i < n; i++){
         cout<<"Enter the element no "<<i <<endl;
	 cin>>arr[i];
 }
 int k;
 cout<<"Enter the no of greatest array is to be find"<<endl;
 cin>>k;

  cout<< "The Kth largest value is : "<<LargestKthElement(arr,n, k)<<endl;

  return 0;
}
