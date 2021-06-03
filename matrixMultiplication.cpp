#include <iostream>
using namespace std;

class MatrixDimension {
	int row;
    int col;
   public:

	MatrixDimension(int row, int col) {
		this->row = row; 
		this->col = col;
	}
	void display() {
		cout<<"row"<<row<<" "<<col;
	}
};


int main() {
	MatrixDimension m1(3,4);
	m1.display();

  
  return 0;
}