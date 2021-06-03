#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char *ownDel(char *str, char del) {
	static char* input = NULL;//should maintain its previous state of function call.
	if(str != NULL){
        input = str;
	}
	//check the base case after the final token has been return
	if(input == NULL) {
		return NULL;
	}
	//start extracting token and store them into the array
	char *output = new char[strlen(input) + 1]; //+1 for the storing the null value
	int i = 0;
	for(; input[i]!='\0'; i++) {
      if(input[i] != del) {
      	output[i] = input[i];
      }else {
      	output[i] = '\0';
      	input = input + i + 1; //jump to next word and + 1 is for the skip the delimeter 
      	return output;
      }
	}
	//corner case 
	output[i] = '\0';
	input = NULL; 
	return output;
}
int main() {
 
  char s[100] = "Hello, I am, Sonu";

  char *ptr = ownDel(s, ',');
  cout<<ptr<<endl;
  while(ptr != NULL) {
  	ptr = ownDel(NULL, ',');
  	cout<<ptr<<endl;
  }
  return 0;
}