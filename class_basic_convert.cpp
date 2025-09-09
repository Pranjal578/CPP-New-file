#include<iostream>
using namespace std;
class Number {
    int n;
public:
    Number(int n) {
        this->n = n;
    }
    void printDetails() {
        cout << "Value of n is " << n << endl;
    }
    operator int() {
        return n;
    }
};
int main() {
    int numb;
    Number num = 100; 
    num.printDetails();
    int x=numb;//num
    cout<<"Value of x is "<<x<<endl;
    return 0;
}