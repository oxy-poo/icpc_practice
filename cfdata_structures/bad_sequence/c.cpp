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
	while ( i++ < numChars){
		cin >> c;
		if(!s.empty() && c != s.top()){
			s.pop();
		}
		else{
			s.push(c);
		}
	}
	//cout << 20 << endl;
	if(s.size() <= 1){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	
	return 0;
}
