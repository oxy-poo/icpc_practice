/*Description

Write a program to read four lines of upper case (i.e., all CAPITAL LETTERS) text input (no more than 72 characters per line) from the input file and print a vertical histogram that shows how many times each letter (but not blanks, digits, or punctuation) appears in the all-upper-case input. Format your output exactly as shown.
Input

* Lines 1..4: Four lines of upper case text, no more than 72 characters per line.
Output

* Lines 1..??: Several lines with asterisks and spaces followed by one line with the upper-case alphabet separated by spaces. Do not print unneeded blanks at the end of any line. Do not print any leading blank lines.
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>

using namespace std;

int main(){
	//cout << "hello world" << endl;
	//string temp;
    cout << __cplusplus << endl;
	vector<string> raw;
    map<char,int> m;
	ifstream inFS;
	inFS.open("a.dat");
	string total,temp;
    while(getline(inFS,temp)){
        cout << temp << endl;
        total+=temp;
    }
    for(auto j: total){
        if( (int)j >=65 && (int)j < 91){
            if(m.find(j) == m.end()){
                m.insert(pair<char,int>(j,1));
            }
            else{
                m.at(j)++;
            }
        }
    }
    int max = -1;
    char keyMax = '\n';
    auto it = m.begin();

    while(it != m.end()){
        if(it->second > max){
            max = it->second;
            keyMax = it->first; 
        }
        it++;
    }
    int itMax = 0;

    for(int maxIter = max; maxIter >= 0;maxIter--){
        for(auto point: m){
            if(point.second >= maxIter){
                cout << '*' << " ";
                //point.second--;

            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    for(auto point : m){
        cout << point.first << " ";
    }

	return 0;
}
