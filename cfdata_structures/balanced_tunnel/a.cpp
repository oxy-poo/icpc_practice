#include <bits/stdc++.h>

using namespace std;

int main(){
	map<int,int> mp;
	int numCars;
	cin >> numCars;
	int it(0),cval;
	while(it < numCars){
		cin >> cval;
		//cout << cval << endl;
		mp.insert(make_pair(cval,it));
		it++;
	}
	//cout << endl;
	it = 0;
	vector<int> nums;
	//cout << endl;
	while(it < numCars){
		cin >> cval;
		//cout << cval << "," << mp[cval] << endl;
		nums.push_back(mp[cval]);
		it++;
	}
	//cout << endl;
	
	int c(0);
	for(unsigned i = nums.size() -1; i >0;i--){
		if(nums.at(i) < nums.at(i-1)){
			nums.at(i -1) = nums.at(i);
			c++;
		}
		
	}
	cout << c << endl;
	
	
	//int count(0);


	
	
	
	return 0;
	}
