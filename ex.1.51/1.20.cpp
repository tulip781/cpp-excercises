#include <iostream>
#include "Sales_item.h"
using namespace std;

int main (){
    Sales_item item1;
    cout << "Please enter the ISBN, Quanitity, Price." << endl;
    while (cin >> item1) {
        cout << item1 << endl;
    }
    return 0;
}
