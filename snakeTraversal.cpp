#include <iostream>
using namespace std;

int main() {
  int matrix[6][6];
  cout<<"Enter the values of the matrix"<<endl;
  for(int i =0 ; i < 6; i++) { for(int j =0; j < 6; ++j) {
      cin>>matrix[i][j];
   }
  }

  cout<<"The snake traversal is: "<<endl;
  int j =0;
  for(int i =0; i < 6; ++i) {
    if(j ==0) {
        for(j; j < 6; ++j) {
          cout<<matrix[i][j]<<" ";
	}
    } else {
       for(j= 5; j >=0 ; --j) {
           cout<<matrix[i][j]<<" ";
       }
    }
    if(j == -1) {
     j = 0;
    }
    cout<<"\n";
  }

  return 0;

}
