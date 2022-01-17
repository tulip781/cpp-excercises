#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "Please enter two numbers to print range" << endl; 
    cout << "Enter first number" << endl; 
    cin >> n1;
    cout << "Enter second number" << endl; 
    cin >> n2;
    cout << "Priting numbers in range from " << n1 << " to " << n2 << endl; 
    if(n1 > n2) {
        while (n2 <= n1){
            cout << n2 << endl;
            n2++;
        };
    } else if (n1 < n2 ){
        while (n1 <= n2){
            cout << n1 << endl;
            n1++;
        };
    }
    return 0;
}