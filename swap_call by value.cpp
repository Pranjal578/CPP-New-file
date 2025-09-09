#include <iostream>
using namespace std;

// Function to swap using Call by Value
void swapValues(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside function after swapping: x = " << a << ", y = " << b << endl;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swapValues(x, y);  // Call by Value

    

    return 0;
}

   
   