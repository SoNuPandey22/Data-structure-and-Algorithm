#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	int arr[] = {2,3,4,5,6,7};
	char ch[] = "hello";
	int len = sizeof(ch)/sizeof(char);
	int n = sizeof(arr)/ sizeof(int);
	// rotate(arr, arr+3, arr + n);
	// next permutation
	next_permutation(arr, arr+n);
	next_permutation(arr, arr+n);

	next_permutation(ch, ch+len);

	for(int i =0; i < len ; i++){
		cout<<ch[i];
	}
	cout<<endl;

	for(int i =0; i <n;++i)
      cout<<arr[i]<<" ";
    return 0;
}