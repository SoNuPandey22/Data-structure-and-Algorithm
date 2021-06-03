//two step
//exectuted but failed in the rectangular matrix  
//1. reverse all the rows 
//2. transponse the matrix

#include<iostream>
#include<algorithm>
using namespace std;

void rotateArr(int arr[][100], int row, int col) {
  for(int i = 0; i < row; i++) {
	  reverse(arr[i], arr[i]+col);
  }

  for(int i =0; i < row; ++i) {
    for(int j =0; j < col; ++j) {
         if(i < j){
           swap(arr[i][j], arr[j][i]);
	 }
    }

  }

}

void display(int arr[][100], int row, int col){
  for(int i =0; i < row ; ++i) {
    for(int j =0; j < col; ++j)
       cout<<arr[i][j]<<" ";
    cout<<endl;
  }

}

int main() {
  int row,col;
  cout<<"Enter the dimension of the array"<<endl;
  cin>>row >>col;
  int arr[100][100];
  cout<<"Enter the elements of the array"<<endl;
  for(int i =0; i < row; i++) {
	  for(int j = 0; j < col ; ++j)
             cin>>arr[i][j];
  }

  cout<<"Before rotation done"<<endl;
  display(arr, row, col);

  rotateArr(arr, row, col);

  cout<<"After the rotation done "<<endl;
  display(arr, row, col);
return 0;
}
