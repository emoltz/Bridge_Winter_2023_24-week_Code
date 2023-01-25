#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double pi = M_PI;


    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    //the number in the parens below can set the precision of the decimal points.
    cout.precision(2);

    cout << pi;


    return 0;
}