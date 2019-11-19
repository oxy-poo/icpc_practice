#include <bits/stdc++.h>

using namespace std;

int main(){
    int queries;
    ifstream inFS("i.dat"); 
    inFS >> queries;
    int currQuery(0);
    while(currQuery < queries){
        long long m,n;
        inFS >> n >> m;
        cout << "n: " << n << "  m:" << m << endl;
        set<int> mods;
        int tmp = m;
        //create the sequence of mods
        while(mods.count(tmp) == 0){
            mods.insert(m%10);
            tmp= (tmp+m) % 10;
            cout << tmp;
        }
        
        long long cnt(0),k(0),sum(0);
        //find how long to run the sequence of mods
        cnt = (n / m);
        printf("\n");
		set<int>::iterator it = mods.begin();
		while(m < n){
			while(it != mods.end()){
				cout << (*it) << endl;
				sum+=(*it);
				m+=(*it);
				it++;
				cout << sum << endl;
				
			}
		}
        cout << sum << endl;
        //cout << sum << endl;
        currQuery++;
    }
    return 0;
}
