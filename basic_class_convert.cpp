#include <iostream>
using namespace std;
class Number{
    int n;
    public:
    Number(int num)
    {
        n=num;
    }
    void printDetais()
    {
        cout << "value of n is"<<n<<endl; 
    }
}
int main()
{
    Number numb=100;
    numb.printDetails();
    return 0;
}