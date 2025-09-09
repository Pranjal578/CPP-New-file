#include <iostream>
using namespace std;

class space {
    int x, y, z;
public:
    void getdata(int a, int b, int c);
    void display(void);
    friend void operator-(space &s); // Unary minus operator
};

void space::getdata(int a, int b, int c) {
    x = a;
    y = b;
    z = c;
}

void space::display(void) {
    cout << x << " " << y << " " << z << "\n";
}

// Definition of unary minus operator (friend function)
void operator-(space &s) {
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}

int main() {
    space S;
    S.getdata(10, -20, 30);

    cout << "S: ";
    S.display();

    -S; // Apply unary minus

    cout << "S after applying unary minus: ";
    S.display();

    return 0;
}
