// forwared iterator to check the valud if present in the list or not
#include <iostream>
#include <list>
using namespace std;

template<class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key) {
   while(start != end){
   	 if (*start = key) {
   	 	return start;
   	 }
   	 start++;
   }
   return end; 
} 


int main() {
	list<int> l;
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);

	auto it = search(l.begin(), l.end(), 9);
	if(*it == l.end()) {
		cout<<"The element is not found"<<endl;
	} else 
     	cout<<*it<<endl;
	return 0;

}