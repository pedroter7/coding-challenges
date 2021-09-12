/*
* URI 1002 - Area of a Circle
* Solution by Pedro T Freidinger (github.com/pedroter7)
*/

#include <iostream>
#include <cmath>
 
using namespace std;

int main() {

    double pi = 3.14159;
    double R, A;

    cin >> R;

    A = pi * pow(R,2);

    // cout.setf(ios::fixed, ios::floatfield);
    // cout.precision(4);

    cout << "A=" << A << endl;
 
    return 0;
}