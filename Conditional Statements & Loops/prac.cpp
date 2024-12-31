#include <iostream>
using namespace std;

int main() {
    //Q1
    int n = 10;
    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum += i;
        if(i == 5) {
            break;
        }
    }
    cout << "sum = " << sum << endl;

    //Q2 Sum of all odd numbers from 1 to N
    int n1 =17;
    int oddsum = 0;
    for(int i=1; i<=n1; i++) {
        if(i%2 != 0) {
            oddsum += i;
        }
    }
    cout << "odd sum = " << oddsum << endl;

    

    return 0;
    }