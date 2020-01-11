#include <bits/stdc++.h>
using namespace std;

void solveSet(set<int> &a,int t){
	if(!a.count(t)){
		a.insert(t);
	}
	else{
		a.erase(t);
		t = t*2;
		solveSet(a,t);
		
	}
	
	
}
	

int main(){
	int queries,sz;
	cin >> queries;
	auto print = [](const int& n) { std::cout << " " << n; };
	while(queries--){
		cin >> sz;
		set<int> s;
		int i = 0;
		int temp;
		bool g = false;
		while(i < sz){
			cin >> temp;
			solveSet(s,temp);
			if(s.count(2048)) g = true;
			i++;
		}
		if(g) cout << "YES" << endl;
		else cout << "NO" << endl;		 
	}
	return 0;
}
