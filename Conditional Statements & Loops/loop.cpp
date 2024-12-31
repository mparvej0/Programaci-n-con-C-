#include <iostream>
using namespace std;

int main() {
    //while loop
    int n = 17;
    int count = 1;
    while(count <= n) {
        cout << count << " ";
        count++;
    }
    cout << endl;

    //for loop
    int n1 = 7;
    for(int i=1; i<=n1; i++) {
        cout << i << " ";
    }

    //do while loop
    int n2 = 10;
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= n2);
    cout << endl;

    //nested loop
    int x = 5;
    for(int i=1; i<=x; i++) {
        cout << "*";
    }
    cout << endl;
    for(int i=1; i<=3; i++) {
        int m = 7;
        for(int i=1; i<=m; i++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}