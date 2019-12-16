#include <bits/stdc++.h>
using namespace std;

int main(){
    int queries;
    cin >> queries;
    long long a,b,c;
    int i(0);
    while(i++ < queries){
        cin >> a >> b >> c;
        //cout << a << " " << b << " " << c << endl;
        cout << (a + b + c) / 2 << endl;
    }
    return 0;
}