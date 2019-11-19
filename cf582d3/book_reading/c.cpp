#include <bits/stdc++.h>

using namespace std;

int main(){
    int queries; 
    cin >> queries;
    int currQuery(0);
    while(currQuery < queries){
        long long m,n;
        cin >> n >> m;
        cout << "n: " << n << "  m:" << m << endl;
        set<int> mods;
        int tmp = m;
        while(mods.count(tmp) == 0){
            mods.insert(m%10);
            tmp= (tmp+m) % 10;
            cout << tmp;
        }
        
        long long cnt(0),k(0),sum(0);
        cnt = n / m;

        while(k < cnt){
            for(auto i: mods){
                sum+=i;
                k++;
            }
        }
        cout << endl;
        cout << sum << endl;
        currQuery++;
    }
    return 0;
}