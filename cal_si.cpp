#include <iostream>
using namespace std;
int main() {
    int p, r, t ;
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time in years: ";
    cin >> t;
    float si = (p * r * t) / 100.0;
    cout << "Simple Interest: " << si << endl;
    return 0;
}
