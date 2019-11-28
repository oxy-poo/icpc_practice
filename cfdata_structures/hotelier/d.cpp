#include <bits/stdc++.h>

using namespace std;

int main(){
    bitset<10> s;
    int numOps;
    cin >> numOps;
    int i = 0;
    int L = 0;
    int R = 9;
    for(int i = 0; i < numOps;i++){
        char c;
        cin >> c;
        //cout << c << endl;
        switch(c){

            case 'L':
                for(L = 0;s[L] != 0;L++);
                s[L] = 1;
                break;
            case 'R':
                for(R = 9;s[R] != 0;R--); s[R] = 1;
                break;
            default:
                int free = (int)c - 48;
                s[free] = 0;
                break;
        }
    }
    for(int i = 0; i < 10;i++){
        cout << s[i];
    }
    cout << endl;

}
