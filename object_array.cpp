#include <iostream>
#include <string>
using namespace std;
class item{
    int item_code;
    float item_price;
    public:
    void getdata();
    void display();
};
void item::getdata(){
    for(int i=0;i<10;i++){
     cout<<"enter values for item "<<i+1<<endl;   
     cout<<"Enter item code: "<<endl;
     cin>>item_code;
     cout<<"Enter item price: "<<endl;
     cin>>item_price;
    }
    }
void item::display(){
    for(int n=0;n<10;n++){
    cout<<"Item code: "<<item_code<<endl;
    cout<<"Item price: "<<item_price<<endl;
    }  
}


int main(){
    item obj1[10];
    obj1[10].getdata();
    obj1[10].display();
    return 0;
}