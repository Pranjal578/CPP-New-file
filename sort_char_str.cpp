#include <iostream>
#include <algorithm> // for sort()
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    sort(str.begin(), str.end()); // sorts characters in ascending order

    cout << "Sorted string: " << str << endl;
    return 0;
}
