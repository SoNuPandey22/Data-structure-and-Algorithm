#include <iostream>
#include <vector>
using namespace std;

int main() {
  int matrix[6][6];
  cout<<"Enter the elements in the matrix"<<endl;
  for(int i = 0; i < 6; ++i) {
    for(int j =0; j < 6; ++j) {
       cin>>matrix[i][j];
    }
  }
  cout<<"Output: "<<endl;
  for(int i = 0; i < 6; ++i) {
    for(int j =0; j < 6; ++j) {
       cout<<matrix[i][j]<<" ";
    }
  }

return 0;
}
