#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
    Sales_item item1, sum;
    while (cin >> item1){
        cout << "enter the book you wish to buy " << endl;
        cin >> item1;
        sum += item1;
        cout << "total books " << sum << endl;
    }
    cout << "The final total books " << sum << endl;
    return 0;
}
