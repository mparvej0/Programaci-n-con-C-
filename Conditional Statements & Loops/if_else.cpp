#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age : ";
    cin >> age;
    if(age >= 18) {
        cout << "You can vote\n";
    } else {
        cout << "You can't vote\n";
    }
    
    return 0;
}