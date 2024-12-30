#include <iostream>
using namespace std;

int main() {
    //Arithmetic
    int a = 5, b = 10;
    cout << "sum = " << endl;//OR cout<<a+b<<endl;
    cout << "difference = " << (a-b) << endl;
    cout << "product = " << (a*b) << endl;
    cout << "division = " << (a/b) << endl;
    cout << "modulo = " << (a % b) << endl;

    //Relational
    cout << (3 < 5) << endl;
    cout << (3 > 5) << endl; 
    cout << (3 <= 3) << endl;
    cout << (3 >= 5) << endl;
    cout << (3 == 3) << endl;
    cout << (3 != 5) << endl;

    //Logical
    cout << !(3 < 1) << endl;
    cout << ( (3 < 1) || (3 < 5) ) << endl;
    cout << ( (3 > 1) && (3 > 2) ) << endl;
    return 0;
}