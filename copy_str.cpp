#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    str1 = str2; // Copying str2 into str1
    cout << "After copying, first string is: " << str1 << endl;
    return 0;
}