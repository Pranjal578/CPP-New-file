#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout <<" Enter second string: ";
    getline(cin, str2);
    if(str1==str2){
        cout <<"strings are egual" <<endl;     
    }
    else{
        cout <<"strings are not equal" <<endl;
    }
    return 0;

}