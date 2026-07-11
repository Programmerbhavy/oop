#include<iostream>
#include<cstring>
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
        cout << "Employee ID: " << eid << endl;
        cout << "Employee Name: " << ename << endl;
    }

};

int main() {
    Employee emp(101, "John Doe");
    emp.display();
    return 0;
}
