
#include <bits/stdc++.h>
using namespace std;

int arr[100000]= {0};

int fact(int n) {
 arr[0] = 1;
 if(n > 1) {
    for(int i =1; i <= n ; i++) {
      arr[i] = arr[i-1] * i;
    }
 }
 return arr[n];
}

int main() {
  int n;
  cin>>n;
  int f = fact(n);
  cout<<"The factorial is: "<<f<<endl;
  return 0;
}


