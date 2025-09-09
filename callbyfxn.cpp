#include <iostream>
using namespace std;
int max(int num1, int num2); // function prototype
int main() {
   int a ;
   int b ;
   int ret;
   cout << "Enter two numbers: ";
   cin >> a >> b; // read two numbers from user
 
   ret = max(a, b); // call the function
   cout << "Max value is : " << ret << endl;
 
   return 0;
}   
int max(int num1, int num2) {
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result;
}