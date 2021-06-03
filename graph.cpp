#include <iostream>
#include <queue>
using namespace std;

void printDFS(int **edges, int n , int sv, bool *visited) {
     cout<<sv<<endl;
     visited[sv] == true;
     for(int i = 1; i < n; i++) {
       if(sv == i)
	       continue;
       if(edges[sv][i] == 1) {
	   if(visited[i]) {
		   continue;
	   }
	   else{
           visited[i] = true;
           printDFS(edges, n, i, visited);
	   }
       }
     }
}

void printBFS(int **edges, int n, int sv) {
     queue<int> pendingVertices;
     bool visited[n] = {false};
     pendingVertices.push(sv);
     visited[sv] = true;

     while(pendingVertices.size() != 0) {
       int currentVertix = pendingVertices.front();
       pendingVertices.pop();
       cout<<currentVertix<<endl;
       for(int i =0; i < n; i++) {
          if(sv == i) {
	     continue;
	  }
	  if(edges[currentVertix][i] == 1 && !visited[i]) {
            pendingVertices.push(i);
	    visited[i] = true;
	  }
       }
     }
}


//is path available or not
bool isPathAvaialble(int **edges, int n, int s , int d) {
	if(s == d)
		return true;
	queue<int> pendingVertices;
	bool visited[n] = {false};
	pendingVertices.push(s);
	visited[s] = true;
	while(!pendingVertices.empty()){
           int currentVertix = pendingVertices.front();
	   pendingVertices.front();
	   if(currentVertix == d) {
             return true;
	   }
	   for(int i = s; i < n; i++) {
             if(!visited[i]) {
		if(i == d) {
                  return true;
		}
               visited[i] = true;
	       pendingVertices[i];
	     }
	   }
	}
   return false;
}

int main() {
	int n , e;
	cout<<"Enter number of nodes and no of edges"<<endl;
        cin>>n>>e;
	int **edges = new int*[n];
	for(int i =0; i < n; i++) {
          edges[i] = new int[n];
	  for(int j =0; j < n; j++) {
             edges[i][j] = 0;
	  } 
	}
        cout<<"Enter the fist and last node of the edges"<<endl;
	for(int i =0; i< e; i++) {
	    int f,s;
            cin>>f>>s;
	    edges[f][s] = 1;
	    edges[s][f] = 1;
	}

	//for visited array 
	bool *visited = new bool[n];
	for(int i =0; i< n; i++) {
           visited[i] = false;
	}
        

	cout<<"DFS print"<<endl;
	printDFS(edges, n, 0, visited);
	cout<<"BFS print"<<endl;
	printBFS(edges, n, 0);

       return 0;
}
