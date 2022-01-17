#include <iostream>
using namespace std;

int main(){
    cout << "Summing the numbers from 50 to 100" << endl;
    int i =50;
    int sum ;
    while( i<=100){
        cout << i << " " << sum << endl;
        sum += i;
        ++i;
    };
    cout << "The sum of number from 50 to 100 is " << sum << endl;
    return 0;
}