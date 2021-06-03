// find the longest substring from the given two string 
//t = abc s=axy
// the logest length is 1 i.e a

#include <iostream>
#include <climits>
#include <string>
using namespace std;


// memoisation technique 


int lcs_rec(string s, string t) {
	// base case
	if(s.size() == 0 || t.size() == 0) {
		return 0;
	}

	if(s[0] == t[0]) {
		// discard the first from both the string
		return 1 + lcs_rec(s.substr(1), t.substr(1));
	} else {
		int x = lcs_rec(s, t.substr(1));
		int y = lcs_rec(s.substr(1), t);
		int z = lcs_rec(s.substr(1), t.substr(1));

		return max(x, max(y,z)); 
	}


}

int lcs_Better(string s, string t, int **ans) {
	if(s.size() == 0 || t.size() == 0) 
		return 0;
	int m = s.size();
	int n = t.size();

	if(ans[m][n] != -1)
		return ans[m-1][n-1];
	if(s[0] == t[0]) {
		ans[m-1][n-1] = lcs_Better(s.substr(1), t.substr(1), ans);
		ans[m][n] = 1 + ans[m-1][n-1];
	} else {
		ans[m-1][n] = lcs_Better(s.substr(1),t, ans);
		ans[m][n-1] = lcs_Better(s, t.substr(1),ans);
		ans[m][n] = max(ans[m-1][n],ans[m][n-1]);
	}
}

int lcs_Better(string s, string t) {
	int m = s.size()+1;
	int n = t.size()+1;
	int **ans;
	ans = new int *[m];
	for(int i =0; i < m; ++i) {
        ans[i] = new int[n];
	}
	for(int i =0; i < m; i++) {
		for(int j =0; j < n; ++j) {
           ans[i][j] = -1;
		}
	}


	
	// ans = new int[m][40];
	// for(int i =0; i < m; i++) {
	// 	for(int j =0; j < n; j++){
	// 		ans[i][j] = -1;
	// 	}
	// }
	return lcs_Better(s, t, ans);
}


int main() {
    string s, t;
    cout<<"Enter the first stirng"<<endl;
    getline(cin, s);
    cout<<"Enter the second string"<<endl;
    getline(cin, t);
    
    cout<<"lcs: "<<lcs_rec(s, t) << endl;
    cout<<"lcs_better: "<<lcs_Better(s, t) << endl;
	return 0;
}