// Array with the class

#include <iostream>
using namespace std;    
const int m=20; 
class item
{int itemcode[m];  
 float itemprice[m];
 int count;
  public:
    void CNT(void)
    {count=0;}    
    
    void getitem(void);
    void displaysum(void);     
    void remove(void);
    void displayitem(void);
};  
void item::getitem(void)
{ 
    cout<<"Item with item code :"<< " and price :"<<" is added"<<endl;
    cin>>itemcode[count]>>itemprice[count];
    count++;    

}           
void item::displaysum(void)
{
    float sum=0;
    for(int i=0;i<count;i++)
          sum=sum+ itemprice[i];
    cout<<"\n The total value of items is :"<<sum<<endl;
}           
void item::remove(void)
{   int a;

    cout<<"Enter the item code to be deleted"<<endl;
    cin>>a;
    for(int i=0;i<count;i++)
      if(itemcode[i]==a)
          itemprice[i]=0;            
          
}                       
void item::displayitem(void)
{  cout<<"\nCode Price\n";
   cout<<"The items in the list are :"<<endl;
    for(int i=0;i<count;i++)
    cout<<"Item code :"<<itemcode[i]<<" with price :"<<itemprice[i]<<endl; 
    cout<<"\n"; 
}               
int main()
{   item x;
    x.CNT();
    int y;
    do{cout<<"\nYou can do the following:"<<endl;
       cout<<"\n 1: Add an item "<<endl;
       cout<<"\n 2: Display total value="<<endl;
       cout<<"\n 3: Delete an item="<<endl;
       cout<<"\n 4: Display all items"<<endl;
       cout<<"\n 5: Exit"<<endl;
       cout<<"\n Enter your choice"<<endl;              
        
       cin>>y;
       switch(y)
       {case 1:x.getitem();
               break;
        case 2:x.remove();
               break;       
        case 3:x.displayitem();
               break;       
        case 4:x.displaysum();
               break;       
        case 5:break;       
        default:cout<<"Wrong input"<<endl;               
       } 
    } while(y!=5);   
    return 0;
}