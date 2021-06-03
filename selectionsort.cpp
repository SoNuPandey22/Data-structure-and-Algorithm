#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int *arr, int n){
	for(int i = 0; i < n-1; i++){
		int indx = i;
		for(int j =i+1; j < n ; j++){
            if(arr[indx] > arr[j]){
            	indx = j;
            }
		}
		swap(arr[indx], arr[i]);
	}

}

void bubblesort(int *arr, int n){
    bool isSwap = false;
	for(int i =0; i < n -1; ++i){
		isSwap = false;
		for(int j = 0; j < n-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				isSwap = true;
			}
		}
		if(isSwap == false)
			break;
	}
}

void disp(int *arr, int n) {
	for(int i =0; i < n; i++){
		cout<< arr[i]<<" ";
	}
}

int main() {
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i =0; i < n; i++){
    	cin>> arr[i];
    }
    cout<<"before the calling algotihm the array is: "<<endl;
    disp(arr, n);

    bubblesort(arr, n);
    cout<<"After the sorting array :"<<endl;
    disp(arr, n);

	return 0;
}