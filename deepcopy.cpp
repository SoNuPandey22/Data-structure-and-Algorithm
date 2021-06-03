#include <bits/stdc++.h>
using namespace std;
class Triangle {
 private:
	 int base;
	 int *height;
 public:
	 //copy constructor 
	 Triangle() {
           height = new int;
	 }
	 
	 void set(int base, int ht){
	   this->base = base;
	   *height = ht;
	 }
	 int getBase() {return base;}
	 int getHeight() {return *height;}

	 Triangle(Triangle &t){
	   base = t.base;
	   height = new int;
	   *height = *(t.height);
	 }

	 ~Triangle(){
	   delete height;
	 }

};

int main() {
 Triangle t1;
 t1.set(5,4);
 cout<<"Base of t1: "<<t1.getBase()<<endl;
 cout<<"Height of t1: "<<t1.getHeight()<<endl;

 Triangle t2 = t1;
 
 cout<<"Base of t2:"<<t2.getBase()<<endl;
 cout<<"Height of t2"<<t2.getHeight()<<endl;

return 0;
}
