#include <bits/stdc++.h>
using namespace std;

int CountPairs(int *arr, int n, int k) {
  int count =0;
  unordered_map<int , int>map;
  for(int i =0; i < n; i++) {
    if(map.find(k - arr[i]) != map.end()) {
      count+= map[k-arr[i]];
    }
    map[arr[i]]++;
  }
  return count;
}

int main() {
  int n,k;
  cout<<"Enter the number of elements in the array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter the sum"<<endl;
  cin>>k;
  cout<<"Enter the elements of array"<<endl;
  for(int i =0; i< n; i++) {
	 cin>>arr[i] ; 
  } 
  int count = CountPairs(arr, n, k);
  cout<<"no of pairs of sum "<<k<<" is: "<<count<<endl;
}
