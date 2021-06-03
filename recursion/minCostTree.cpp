#include <iostream>
#include <cmath>
using namespace std;

void printMinCost(int arr[], int row, int col, int i, int j) {
    if(i == row-1 && j == col-1)
    	return;
    cout<< arr[i][j]<<" ";
   
;}

int main() {
	int row, col; 
	cin>>row >>col;
	int arr[row][col];
	printMinCost(arr, row, col, 0, 0);
	return 0;
}