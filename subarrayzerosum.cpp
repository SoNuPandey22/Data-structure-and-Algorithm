#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void multiply(vector<int>&res, int x) {
     int carry= 0;
     for(int i = 0; i < res.size(); ++i) {
      int prod = res[i]  * x + carry;
      res[i] = prod % 10;
      carry = prod/10;
     }
     while(carry) {
       res.push_back(carry % 10);
       carry /= 10;
     }


}



vector<int> factorial(int n) {
    vector<int> res;
    res.push_back(1);
    for(int x = 2; x < n; ++x)
	    multiply(res, x);
    reverse(res.begin(), res.end());
    return res;

}

int main() {
	int n ;
	cout<<"Enter the value to find its factorial"<<endl;
	cin >>n;
        vector<int> res = factorial(n);
	for(auto i : res) 
		cout<<res[i]<<" ";


	return 0;
}
