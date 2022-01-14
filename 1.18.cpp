#include <iostream>
using namespace std;

int main(){
    int currVal =0, val =0;
    if(cin >> currVal){
        int cnt = 1;
        while (cin>> val){
            if (val == currVal){
                ++cnt;
            } else {
                cout << "The number " <<  currVal << " appears " << cnt << " times." << endl;
                cnt = 1;
                currVal = val;
            }
        }
        cout << "The number " <<  currVal << " appears " << cnt << " times." << endl;
    }
    return 0;
}