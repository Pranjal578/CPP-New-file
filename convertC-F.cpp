#include <iostream>
using namespace std;
int main() {
    int c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    float f = (c * 9.0 / 5.0) + 32.0;
    cout << "Temperature in Fahrenheit: " << f << endl;
    return 0;
}