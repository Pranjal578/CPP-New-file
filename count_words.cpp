#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int wordCount = 0;
    bool inWord = false;
    for (char c : str) {
        if (isspace(c)) {
            if (inWord) {
                wordCount++;
                inWord = false;
            }
        } else {
            inWord = true;
        }
    }
    if (inWord) {
        wordCount++;
    }
    cout << "Number of words: " << wordCount << endl;
    return 0;
}