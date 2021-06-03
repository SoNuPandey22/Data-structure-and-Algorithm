#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> v;
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);


   for(auto it= v.rbegin(); it != v.rend(); it++)
   	  cout<<*it<<" ";
   	cout<<endl;

   	for(auto it = v.begin(); it != v.end(); it++) {
   		cout<<*it<<" ";
   	}
   	cout<<endl; 	

   	for(auto it = v.cbegin(); it != v.end(); it++) {
   		cout<<*it<<" ";
   	}
    cout<<endl;
   	auto it = v.crbegin(); //pointing to the last element 
   	cout<<*it<<endl;
    // maximum size the vector can hold
    cout<<v.max_size()<<endl;

    //resize the vector 
    v.resize(100);
    cout<<v.max_size()<<endl;

    //at function in vector 
    int i = v.at(3);
    cout<<i<<endl;

    //data() indicate to the memeoy internally stored by the vector
    cout<<v.data()<<endl; 
 
   return 0;

}