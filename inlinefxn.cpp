#include <iostream>
using namespace std;

// Inline function to calculate square
inline int square(int n) { return n * n; }

// Inline function to find maximum of two numbers
inline int maximum(int a, int b) { return (a > b) ? a : b; }

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Square of " << x << " = " << square(x) << endl;
    cout << "Square of " << y << " = " << square(y) << endl;

    cout << "Maximum of " << x << " and " << y << " = " << maximum(x, y) << endl;

    return 0;
}
