#include <iostream>
#include <vector>
#include <fstream>
#include <tuple>


using namespace std;

int main(){
	ifstream inFS;
	inFS.open("a.dat");
	int num;
	vector<int> scenario;
	while(inFS >> num){
		scenario.push_back(num);
	}
	for(int a = 1; a < scenario.size();a++){
		int dim_size = scenario.at(a) * 2 +1;
		cout <<"Scenario: " << scenario.at(a) << endl;
		for(int b = 0; b < dim_size;b++){
			for(int c = 0; c < dim_size;c++){
				for(int d = 0; d < dim_size;d++){
					if(d == c && c == b){
						cout << "d";
					}
					else{
						cout << "*";
					}	
				}
				cout << endl;
			}
		cout << endl << endl;
		}
	}
return 0;
}	
