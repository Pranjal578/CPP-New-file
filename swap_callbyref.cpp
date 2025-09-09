#include <iostream>
using namespace std;

// Function to swap using Call by Reference
void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swapValues(x, y);  // Call by Reference

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}

