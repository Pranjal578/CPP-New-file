#include <iostream>
using namespace std;
int main(){
    /*for(int i = 0; i < 10; i++)
     { 
        if(i==4)
         continue;
         cout << i << endl;
     }
       
       for(int i = 0; i < 10; i++)
     { 
        if(i==4)
         break;
         cout << i << endl;
     }*/
       
     /*int num[10];
        cout << "Enter 10 numbers: ";
        for(int i = 0; i < 10; i++) {
            cin >> num[i];
        }
        cout << "You entered: ";
        for(int i = 0; i < 10; i++) {
            cout << num[i] << " ";
        }*/



    int num[5][5];
        cout << "Enter 5 numbers: "<<endl;
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                cin >> num[i][j];
            }
        }
        cout << "You entered: "<<endl;
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                cout << num[i][j] << " ";
            }
            cout << endl;
        }
    // Example of a 2D array input and output

    


return 0;
}
