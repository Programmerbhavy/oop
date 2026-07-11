/*
wap to create employee class with eid,enmae,create dynamic constructor
to assign memory to enmae and display the same
*/
#include<iostream>
#include<string.h>
using namespace std;

class Employee {
private:
    int eid;
    char* ename;

public:
    // Dynamic constructor
    Employee(int id, const char* name) {
        eid = id;
        ename = new char[strlen(name) + 1];
        strcpy(ename, name);
    }

    // Display employee details
    void display() {
        cout << "Employee ID: " << eid ;
        cout << "\nEmployee Name: " << ename;
    }

};

int main() {
    Employee emp(24, "Ady vyas");
    emp.display();
    return 0;
}