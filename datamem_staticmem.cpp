//static data member and static member function
#include<iostream>
using namespace std;
class test
{ int code;
  static int count; 
  
  public:
   void setcode(void)
   {code=++count;}
    
   void showcode(void)
   {cout<<"The code is :"<<code<<endl;} 
   
   static void showcount(void)
   {cout<<"The count is :"<<count<<endl;}   
};

int test::count=0; //definition of static data member
int main()
{
    test t1,t2;
    t1.setcode();
    t2.setcode();
    
    test ::showcount();
    
    test t3;
    t3.setcode();

    test ::showcount();// accessing static member by class name
    
    cout<<"After reading data:"<<endl;
    
    t1.showcode();
    t2.showcode();  
    t3.showcode();

    return 0;

}