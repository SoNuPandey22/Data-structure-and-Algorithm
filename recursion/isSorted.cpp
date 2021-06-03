#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
   if(n == 0 || n ==1) 
   	return true;
   if(arr[n] < arr [n-1])
   	return false;
   isSorted(arr, n-1);
}

int main(){
 int arr[] = {1,2,3,4,7};
 int len = sizeof(arr)/sizeof(int);

 cout<<isSorted(arr, len);
 return 0;
}