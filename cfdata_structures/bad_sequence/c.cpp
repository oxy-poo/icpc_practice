#include <bits/stdc++.h>

using namespace std;

int main(){
	int numChars;
	cin >> numChars;
	cin.ignore();
	char c;
	int i = 0;
	//cout << 11 << endl;
	stack<char> s;
	int count = 0;
	while ( i++ < numChars){
		cin >> c;
		if(c == '(') count++;
		if(c == ')') count--;
	}
	//cout << 20 << endl
	if(count >= -1) cout << "Yes" << endl;
	else cout << "No" << endl;
	
	return 0;
}
