#include <iostream>
using namespace std;

class space {
    int x, y, z;
public:
    void getdata(int a, int b, int c);
    void display(void);
    friend space operator+(space s1, space s2); // Pass by value
};

void space::getdata(int a, int b, int c) {
    x = a;
    y = b;
    z = c;
}

void space::display(void) {
    cout << x << " " << y << " " << z << "\n";
}

// Binary operator + (friend, pass by value)
space operator+(space s1, space s2) {
    space temp;
    temp.x = s1.x + s2.x;
    temp.y = s1.y + s2.y;
    temp.z = s1.z + s2.z;
    return temp;  // return a new object
}

int main() {
    space S1, S2, S3;

    S1.getdata(10, -20, 30);
    S2.getdata(5, 15, -25);

    cout << "S1: ";
    S1.display();

    cout << "S2: ";
    S2.display();

    S3 = S1 + S2; // calls operator+

    cout << "S3 (S1 + S2): ";
    S3.display();
    
    return 0;
}
