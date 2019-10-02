#include <iostream>
using namespace std;


int main(){
    int num;
    cin >> num;
    int count(0);

    for(int i = 0; i <= num; i++){
        int sum(i),counter(i);
        while(sum <= num){
            counter++;
            sum +=counter;
            if(sum == num){
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}