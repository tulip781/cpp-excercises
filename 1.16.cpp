#include <iostream>
using  namespace std;

int main(){
    cout << "This program will print the sum of a string on numbers to the stream" << endl;
    int v1;
    int sum = 0;
    while (cin >> v1 ){
        sum += v1;
    }
    cout << "The total sum of these integers is " << sum << endl;
    return 0;
}