#include <iostream>
using namespace std;

int main(){
    cout << "Enter two numbers you wish to multiply " << endl;
    int n1, n2;
    cin >> n1 >> n2;
    cout << "The product of "; << n1 << " and "; << n2 << " is " << n1 * n2 << endl;
    return  0;
}

// The output is not legal because it uses semicolons. The expression requires two operands, and the semi colon ends each line.
// The program is not legal. The operator << is a member of std::cout, thus cannot be called without the object std::cout. Prepend the expression with std::cout.