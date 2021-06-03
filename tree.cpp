//perform avl tree implementaion
#include <iostream>
using namespace std;

class Node {
   public:
	   int data;
	   Node *left;
	   Node *right;
	   int height;
};

int Height(Node *N) {
   if(!N)
	   return 0;
   return N->height;
}

Node * newNode(int key) {
  Node *node = new Node();
  node->data = key;
  node->left = NULL;
  node->right = NULL;
  node->height = 1;
  return node;
}

Node *rightRotation(Node *y) {
  Node *x = y->left;
  Node *temp = x->right;
  
  //perform rotation
  x->right = y;
  y->left = temp;

  y->height = 1 + max(Height(y->right),Height(y->left));
  x->height = 1 + max(Height(x->right), Height(x->left));

  return x;
   
}

//left rotation
Node *leftRotation(Node *x) {
  Node *y = x->right;
  Node *temp = y->left;

  y->left = x;
  x->right = temp;

  //update the height
  x->height = 1 + max(Height(x->right), Height(x->left));
  y->height = 1 + max(Height(y->right), Height(y->left));

  return y;
}

int BalFactor(Node *N) {
  if(N == NULL)
	  return 0;
  return (Height(N->left) - Height(N->right));
}
 

Node *Insert(Node *root, int data) {
   if(root == NULL) 
     return (newNode(data));
  
   if(data > root->data) {
     root->right = Insert(root->right, data);
   }
   else if(data < root->data) {
     root->left = Insert(root->left, data);
   }
   else{
        return root;
   }

   //performing the avl of the tree
   int bal = BalFactor(root);

   if(bal > 1 && data < root->left->data) {
     return rightRotation(root);
   }
   if(bal < -1 && data > root->right->data) {
      return leftRotation(root);
   }
   if(bal > 1 && data > root->left->data) {
       root->left = leftRotation(root->left);
       return rightRotation(root);
   }
   if(bal < -1 && data < root->right->data) {
       root->right = rightRotation(root->right);
       return leftRotation(root);
   }
}

void Inorder(Node *root) {
  if(root == NULL) {
   return ;
  } 
  Inorder(root->left);
  cout<<root->data;
  Inorder(root->right);
}

int main() {

	Node *root = new Node();
	int n, newData;
	cout<<"Enter the Number of node in the tree : "<<endl;
	cin>>n;

	while(n--) {
          cin>>newData;
	  root = Insert(root, newData);
	}

	cout<<endl;

	Inorder(root);

	return 0;

}

