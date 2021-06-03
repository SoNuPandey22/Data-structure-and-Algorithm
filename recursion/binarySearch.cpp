#include <iostream>
#include <algorithm>
using namespace std;
int helperSearch(int arr[], int s, int e, int key) {
   if(s == e)
   	return -1; 
   int mid = (s + e)/2;
   if(arr[mid] == key)
   	 return mid;
   if(key < arr[mid]) 
      helperSearch(arr, s, mid-1, key);
   else 
      helperSearch(arr, mid, e, key); 
}

int search(int arr[], int n, int key) {
  if(n == 0)
  	return -1;
  return helperSearch(arr, 0, n-1, key);
}

int main() {
   int key;
   cin>>key;
   int arr[] = {1,3,2,34,33,21,19,65};
   
   int len = sizeof(arr)/sizeof(int);
   sort(arr, arr+len);
   int index = search(arr, len, key);
   cout<<"Element found at index: "<<index<<endl;
   return 0;
}