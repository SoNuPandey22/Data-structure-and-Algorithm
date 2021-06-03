//using vector pair 
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class car {
public:
	string name;
	int x, y;
	car() {
       this.name = 'fox valgon';
       this.x = 12;
       this.y = 14;
	}
	car(string n, int x, int y) {
		name = n;
		this->x = x;
		this->y = y;
	}
	int dist() {
		return x*x + y*y;
	}
};

bool compare(car c1, car c2) {

   if(c1.dist() == c2.dist()) {
   	 return c1.name < c2.name;
   }
   return c1.dist() < c2.dist();
 
}

int main() {
     int n;
     cin>>n;

     vector<car>v;

     for(int i =0; i < n; i++) {
     	string name;
     	int x, y;
     	cin>>name>>x>>y;
     	cin.get();
     	car temp(name, x, y);
     	v.push_back(temp);
     }
     sort(v.begin(),v.end(), compare);

     // for loop
     for(auto p : v) {
             cout<<"Car :"<<p.name<<","<<p.dist()<<endl;
     }
	return 0;
}