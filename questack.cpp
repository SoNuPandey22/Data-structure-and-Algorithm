#include <iostream>
#include <stack>
using namespace std;

int main() {
        stack<int> rear,front;
	int Q;
	while(Q) {
          int q,x;
	  cin>>q;
	  if(q == 1) {
            cin>>x;
	    rear.push(x);
	  }
	  else {
            if(front.empty()) {
               while(!rear.empty()) {
                 front.push(rear.top());
		 rear.pop();
	       }
	    }
	    if(!front.empty()){
	        if(q ==2) front.pop();
		if(q == 3) cout<<front.top()<<endl;
	    }		    
			    
	 
	  }
	  Q= Q-1;
	}

	return 0;
}
