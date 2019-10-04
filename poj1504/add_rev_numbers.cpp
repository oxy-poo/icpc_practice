#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

ostream & operator <<(ostream &os, const pair<int,int> p){
    os << p.first << "  " << p.second << endl;
    return os;
}
int reverse_int(int rev){
    string to_reverse = to_string(rev);
    int start = 0;
    int end = to_reverse.size()-1;
    char tmp;
    while(start < end){
        tmp = to_reverse.at(start);
        to_reverse.at(start) = to_reverse.at(end);
        to_reverse.at(end) = tmp;
        start++;
        end--;
    }
    return stoi(to_reverse);
}
int main(){
    int t1,t2;
    ifstream inFS;
    inFS.open("a.dat");
    int num;
    inFS >> num;
    vector <pair<int,int>> v;
    while(inFS >> t1 >> t2){
        
        v.push_back(make_pair(t1,t2));
        cout << v.back();
    }

    for(int i = 0; i < v.size();i++){
        string temp = to_string(v.at(i).first);
        string temp2 = to_string(v.at(i).second);

        while(temp.back() == '0'){
            temp.pop_back();
        }
        while(temp2.back() == '0'){
            temp2.pop_back();
        }
        v.at(i).first = reverse_int(v.at(i).first);
        v.at(i).second = reverse_int(v.at(i).second);
    }
    cout << endl << endl;
    for(auto p : v){
        cout << reverse_int(p.first + p.second) << endl;
    }

    
}