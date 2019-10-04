#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

ostream & operator <<(ostream &os, const pair<int,int> p){
    os << p.first << "  " << p.second << endl;
    return os;
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
        int size = temp.size();
        // while(temp.at(0) == '0'){
        //     temp = temp.substr(1);
        // }
        while(temp.back() == '0'){
            temp.pop_back();
        }
        while(temp2.back() == '0'){
            temp2.pop_back();
        }
        //cout << temp << endl;
        int start = 0;
        int start2 = 0;
        int end = temp.size() - 1;
        int end2 = temp2.size() -1;
        char tmp,tmp2;
        while(start < end){
            tmp = temp.at(start);

            temp.at(start) = temp.at(end);

            temp.at(end) = tmp;
            
            start++;
            end--;
        }
        while(start2 < end2){
            tmp2 = temp2.at(start2);
            temp2.at(start2) = temp2.at(end2);
            temp2.at(end2) = tmp2;
            start2++;
            end2--;
        }
        cout << temp << "   " << temp2 << endl;
        v.at(i).first = stoi(temp);
        v.at(i).second = stoi(temp2);
    }
    cout << endl << endl;
    for(auto p : v){
        string rev = to_string(p.first + p.second);
        int start = 0;
        int end = rev.size()-1;
        while(start < end){
            char temp = rev.at(start);
            rev.at(start) = rev.at(end);
            rev.at(end) = temp;
            start++;
            end--;
        }
        cout << stoi(rev) << endl;
    }

    
}