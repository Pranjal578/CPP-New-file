#include <iostream>
using namespace std;

class dean; 

class teacher {
    int salary1;
public:
    void getdata();
    friend void incometax(teacher t, dean d);
};

class dean {
    int salary2;
public:
    void putdata();
    friend void incometax(teacher t, dean d);
};

void teacher::getdata() {
    cout << "Enter teacher salary: ";
    cin >> salary1;
}

void dean::putdata() {
    cout << "Enter dean salary: ";
    cin >> salary2;
}

void incometax(teacher t, dean d) {
    int tax1 = 0.3 * t.salary1;
    int tax2 = 0.3 * d.salary2;
    cout << "Teacher tax: " << tax1 << endl;
    cout << "Dean tax: " << tax2 << endl;
}

int main() {
    teacher t1;
    dean d1;
    t1.getdata();
    d1.putdata();
    incometax(t1, d1);
    return 0;
}
