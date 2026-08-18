/*wap to using a base class Parent and a derived class child to demonstrate the order of
execution of constructors and destructors.*/
#include <iostream>
#include <string.h>
using namespace std;
class Parent
{
public:
    int n;
    Parent()
    {
        n = 0;
    }
    Parent(int a)
    {
        n = a;
        cout << "\nParent Constructor called";
    }
    ~Parent()
    {
        cout << "\nDestructor called";
    }
};
class derived : public Parent
{
public:
    int p;
    derived()
    {
        p = 0;
    }
    derived(int a, int b) : Parent(a)
    {
        p = b;
        cout << "\nDerived Constructor called";
    }
    void display()
    {
        cout << "Parent class variable " << n << "\nChild class variable" << p;
    }
    ~derived()
    {
    }
};
int main()
{
    derived obj(5, 10);
    system("cls");
    obj.display();
    return 0;
}
