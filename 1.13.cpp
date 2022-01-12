#include <iostream>
using namespace std;

int main(){
    cout << "Summing the numbers from 50 to 100" << endl;
    ;
    int sum=0 ;
    for(int i =50; i<=100; ++i){
        cout << i << " " << sum << endl;
        sum += i;
    };
    cout << "The sum of number from 50 to 100 is " << sum << endl;
    return 0;
}

int oneTen(){
    cout << "Printing Number from 10 to 0" << endl;
    for( int i = 10; i>=0; --i) 
        cout << i << endl;
    return 0;
}

int oneEleven(){
    int n1, n2;
    cout << "Please enter two numbers to print range" << endl; 
    cout << "Enter first number" << endl; 
    cin >> n1;
    cout << "Enter second number" << endl; 
    cin >> n2;
    cout << "Priting numbers in range from " << n1 << " to " << n2 << endl; 
    if(n1 > n2) {
        for (;n2 <= n1; n2++)
            cout << n2 << endl;
    } else if (n1 < n2 ){
        for (;n1 <= n2; n1++)
            cout << n1 << endl;
    }
    return 0;
}