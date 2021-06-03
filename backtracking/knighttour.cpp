#include  <bits/stdc++.h>
using namespace std;
#define N 8
// helper function to solve the k util
int solveKTUtil(int x, int y, int movei, int sol[N][N], int xmove[],int ymove[]);

// function to check if i and j are velid for N*N chssboard

int isSafe(int x, int y , int sol[N][N]) {
	return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
	// this will ensure that the value is valid
    
}

// setw(int n) : fucntion is used to set the gap and algn the item
void printSolution(int sol[N][N]) {
	for(int x = 0 ; x < N; ++x) {
		for(int y =0; y < N; ++y) {
			cout<<" "<< setw(2)<< sol[x][y]<<" ";

		}
		cout<<endl;
	}
}

int solveKT() {
	int sol[N][N];
	// initialize the board with -1
	for(int x =0; x < N; ++x)
		for(int y =0; y < N; ++y)
			sol[x][y] = -1;

	// xmove[] - is for next value of the x cordinmat
	// ymove[] - is for nex value of the y cordinate
    int  xmove[8] = {2,1, -1, -2, -2, -1, 1, 2};
    int  ymove[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    

    // since at the starting 
    sol[0][0] = 0;

    // exploring all the tours 
    if(solveKTUtil(0,0,1, sol, xmove, ymove) == 0){
    	cout<<"Solution doesnot exist";
       return 0;
    }
    else 
    	printSolution(sol);
    return 1;
}

// recursive funtion to travel the board

int solveKTUtil(int x, int y, int movei, int sol[N][N], int xmove[N], int ymove[N]) {
	int k, next_x, next_y;
	if(movei == N*N)
		return 1;
	for(k = 0; k < N; k++) {
		next_x = x + xmove[k];
		next_y = y + ymove[k];
		if(isSafe(next_x, next_y, sol))  {
			sol[next_x][next_y] = movei;
			if(solveKTUtil(next_x, next_y, movei+1,sol, xmove, ymove) == 1)
				return 1;
			else 
				// backtracking
				sol[next_x][next_y] = -1;
		}
	}
  return 0;
}


int main() {
	solveKT();
	return 0;
}
