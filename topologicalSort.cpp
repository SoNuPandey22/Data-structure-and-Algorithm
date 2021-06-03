//the graph should be DAG for opeating topological sorting
//starting node should have 0 degree 
//performed by using a temporary stack
//first recursivelry call topological sorting for all its adjacent vertices, then push it into stack. Finally, print the content of the stack. A vertix is pushed into the stack only when all its adjacent vertices are already in the stack


#include <iostream>
#include <list>
#include <stack>
using namespace std;

class Graph {

  int V;

  //pointer to an array
  list<int> *adj;
  void topologicalSortUtil(int v, bool visited[], stack<int>&Stack);

	public :
          Graph(int V);
          void addEdge(int v, int w);

	  //prints the topolicaal Sort of the complete graph
	  void topologicalSort();

  
};

Graph::Graph(int V) {

   this->V = V;
   adj = new list<int>[V];

}

void Graph::addEdge(int v, int w) {
  adj[v].push_back(w);
  //added the node to the list
}

//a recursive function used by topological order travelsal of the graph

void Graph::topologicalSortUtil(int v, bool visited[], stack<int> &st) {

	//mark the node visited
	visited[v] = true;

	//recur to all the vertices near to this node
	list<int>::iterator i;
	for(i = adj[v].begin(); i != adj[v].end(); i++) {
            if(!visited[*i]) 
		    topologicalSortUtil(*i, visited, st);
	}

	st.push(v);


}
void Graph::topologicalSort() {

  stack<int> Stack;

  bool* visited = new bool[V];
  for(int i =0; i < V; i++) {
      visited[i] = false;
  }

  //visit all the node if not visited then call the topological helper on it
  for(int i =0; i < V; i++) {
       if(visited[i] == false) 
	       topologicalSortUtil(i, visited, Stack);
  }
  while(Stack.empty() == false) {
        cout<<Stack.top() <<" ";
	Stack.pop();
  }
}

int main() {

   Graph g(6);
   g.addEdge(5,2);
   g.addEdge(5,0);
   g.addEdge(4,0);
   g.addEdge(4,1);
   g.addEdge(2,3);
   g.addEdge(3,1);

   cout<<"Following is a Topological Sort of the given graph \n";

   g.topologicalSort();

   return 0;

}














