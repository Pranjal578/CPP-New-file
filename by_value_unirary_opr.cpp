#include <iostream>
using namespace std;

class space {
    int x, y, z;
public:
    void getdata(int a, int b, int c);
    void display(void);
    friend space operator-(space s); // Pass by value
};

void space::getdata(int a, int b, int c) {
    x = a;
    y = b;
    z = c;
}

void space::display(void) {
    cout << x << " " << y << " " << z << "\n";
}

// Unary minus operator (pass by value)
space operator-(space s) {
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
    return s; // return a new object
}

int main() {
    space S1, S2;
    S1.getdata(10, -20, 30);

    cout << "S1: ";
    S1.display();

    S2 = -S1;  // Now creates a new object with negated values

    cout << "S2 (after applying unary minus): ";
    S2.display();

    cout << "S1 (unchanged): ";
    S1.display();

    return 0;
}
