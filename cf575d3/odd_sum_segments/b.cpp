#include <bits/stdc++.h>
using namespace std;

int main(){
    int numQ;
    cin >> numQ;
    int it = 0;
    while(it++ < numQ){
        int totsz,segsz;
        cin >> totsz >> segsz;
        int* arr = new int[totsz];
        for(int i = 0; i < totsz;i++){
            int tmp;
            cin >> tmp;
            arr[i] = tmp;
            //cout << tmp << "  ";

        }
        //scout << endl;
        vector<int> segments;
        int sum = 0;
        for(int i = 0; i < totsz;i++){
            sum+= arr[i];
            if(sum % 2){
                segments.push_back(i);
                sum = 0;
            }
        }
        if(segments.size() % 2 != segsz % 2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for(int i= 1; i < segments.size();i++){
                cout << segments.at(i) -1 << " ";
            }
            cout << totsz << endl;
        }
        //cout << endl;

        delete arr;
    }
    return 0;
}