#include <iostream>
using namespace std;
// fxn to calculate volume of cube
int volume(int side) {
    return side * side * side;
}
// fxn to calculate volume of cuboid
int volume(int length, int breadth, int height) {
    return length * breadth * height;
}
// fxn to calculate volume of cylinder
double volume(double radius, double height) {
    return 3.14159 * radius * radius * height;
}
int main() {
    int side, length, breadth, height;
    double radius, cylHeight;
    cout << "Volume Calculation Program" << endl;
    cout << "--------------------------" << endl;
    cout << "Choose the shape to calculate volume:" << endl;
    cout << "1. Cube" << endl;
    cout << "2. Cuboid" << endl;
    cout << "3. Cylinder" << endl;
    cout << "--------------------------" << endl;
    int choice;
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    // Input and output for different shapes
    if(choice < 1 || choice > 3) {
        cout << "Invalid choice!" << endl;
        return 1;
    }
    // Using function overloading to calculate volumes
    if(choice == 1) {
    // Volume of cube
    cout << "Enter side of cube: ";
    cin >> side;
    cout << "Volume of cube: " << volume(side) << endl;
    }
    else if(choice == 2) {
    // Volume of cuboid
    cout << "Enter length, breadth and height of cuboid: ";
    cin >> length >> breadth >> height;
    cout << "Volume of cuboid: " << volume(length, breadth, height) << endl;
    }
    else if(choice == 3) {
    // Volume of cylinder
    cout << "Enter radius and height of cylinder: ";
    cin >> radius >> cylHeight;
    cout << "Volume of cylinder: " << volume(radius, cylHeight) << endl;
    }
    return 0;
}