#include <bits/stdc++.h>
using namespace std;

void solveSet(set<int> &a,int t){
	//if(t == 2048) return;
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
	ifstream inFS;
	inFS.open("i.dat");
	int queries,sz;
	inFS >> queries;
	auto print = [](const int& n) { std::cout << " " << n; };
	while(queries--){
		inFS >> sz;
		set<int> s;
		int i = 0;
		int temp;
		while(i < sz){
			inFS >> temp;
			//cout << temp << " ";
			solveSet(s,temp);
			

			
			//for_each(s.begin(),s.end(),print);
			i++;
		}
		cout << endl;
		//for_each(s.begin(),s.end(),print);
		cout << endl;
		
			 
		
	}
	return 0;
}
