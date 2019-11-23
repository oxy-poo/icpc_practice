#include <bits/stdc++.h>
using namespace std;

int main(){
	int numDays,currStrength,drinkIncrement;
	vector<int> grams;
	vector<int> cost;
	cin >> numDays >> currStrength;
	int i = 0;
	int tmp;
	while ( i++ < numDays){
		cin >> tmp;
		//cout << tmp << "  ";
		grams.push_back(tmp);
	}
	//cout << endl;
	cin >> drinkIncrement;
	i = 0;
	while( i++ < numDays){
		cin >> tmp;
		//cout << tmp << "  ";
		cost.push_back(tmp);
	}
	//cout << endl;
	
	
	int currCost(0);
	for(i = 0; i < numDays;i++){
		if(currStrength >= grams.at(i)) continue;
		else if( currStrength + drinkIncrement >= grams.at(i)){
			currStrength+=drinkIncrement;
			currCost += cost.at(i);
		}
		else{
			currCost = -1;
			break;
		}
	}
	
		
		
	cout << currCost << endl;
	return 0;
}
