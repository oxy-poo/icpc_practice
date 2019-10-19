#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265

int main(){
    ifstream inFS;
    
    inFS.open("a.dat");

    vector<int> v;
    int t;
    inFS >> t;
    pair<double,int> *arr = new pair<double,int>[t];
    for(int j = 0; j < t;j++){
        double radius;
        int bullets;
        inFS >> radius >> bullets;
        arr[j] = make_pair(radius,bullets);
        cout << arr[j].first << "   " << arr[j].second << "=";
        double theta = 360 / (2*bullets);
        double sinTheta = sin(theta*PI/180);
        double result = (radius*sinTheta)/(sinTheta + 1);
        cout << result << endl;
    }
    
    return 0;
}