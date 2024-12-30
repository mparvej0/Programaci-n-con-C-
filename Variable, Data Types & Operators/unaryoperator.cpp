#include <iostream>
using namespace std;

int main() {
    //Increment ++
    int a = 5;
    int b = a++;
    cout << "b = " << b << endl;
    cout << "a = " << a << endl;
    int c = 10;
    int d = ++c;
    cout << "d = " << d << endl;
    cout << "c = " << c << endl;

    //Decrement --
    int e = 15;
    int f = d--;
    cout << "f = " << f << endl;
    cout << "e = " << e << endl;
    int g = 20;
    int h = --f;
    cout << "h = " << h << endl;
    cout << "g = " << g << endl;
    

    return 0;
}