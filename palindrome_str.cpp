#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int start = 0, end = str.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "Palindrome string" << endl;
    else
        cout << "Not a palindrome string" << endl;

    return 0;
}
