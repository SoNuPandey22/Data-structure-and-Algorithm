#include <iostream> 
using namespace std;


def struct Node {
  int data;
  struct node *next;

}node;

node *head = NULL;
node *currNode = NULL;
node *InsertAtBeg(node*, int data);
node *delAt(node*, int position);
int findLength(node *start);
void display(node *start);


int main() {

 return 0;
}

node* InsertAtBeg(node *start, int val) {
      if(start == NULL) {
          node* temp = new node();
	  temp->data = val;
	  temp->next = temp;
	  head = temp;
	  return head;
      }
      
      node* temp = new node();
      temp->data = val;
      temp->next= head->next;
      head = temp;


}
