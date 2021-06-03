// find the maximum profit by and sell and atmost two transactions
#include <iostream>
using namespace std;

int maxProfit(int *prices, int n) {
    int profit = prices[1] - prices[0];
    int minElement = prices[0];

	for(int i = 1; i < n-1; ++i) {
		//chek the profit
		if(prices[i] - minElement > profit) 
			profit = prices[i] - minElement;
		if(prices[i] < minElement) {
			minElement = prices[i];
		}
	}
	return profit;
}


int main(){
	int n; 
	cin>>n;
	int prices[n];
	//enter the prices of the item
	for(int i =0; i < n; i++) {
		cin>>prices[i];
	}

	cout<<maxProfit(prices, n);
	return 0;
}