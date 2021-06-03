#include <bits/stdc++.h>
using namespace std;
  
// One function works for all data types.
// This would work even for user defined types
// if operator '>' is overloaded
template <typename T>
  
T myMax(T arr[], int len, T data)
{
	for(int i = 0; i < len ; i++) {
		if(arr[i] == data) {
			return i;
		}
	}
}

  
int main()
{
  
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< myMax<int>(arr, n, 6)<<endl;

    // Call myMax for int
    // cout << myMax<int>(3, 7) << endl;
  
    
  
    return 0;
}