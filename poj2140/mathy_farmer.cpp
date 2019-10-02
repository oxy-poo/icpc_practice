#include <iostream>
using namespace std;


int main(){
    int num;
    cin >> num;
    int sum,count;
    sum = 0;
    count = 0;
    for(int i = 1; i <= num; i++){
        for(int sum = i; i < num;sum+=i){
            
            if(sum > num){
                break;
                sum = 0;
            }
            if(sum == num){
                cout << i << endl;
                count++;
                sum = 0;
            }
            i++;
        }
        if(sum == num){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}