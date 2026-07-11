/*
wap to create number class with n as data member create const object and display the value of number
*/
#include<iostream>
#include<string.h>
using namespace std;

class number {
private:
    int n;

public:
number(int value) {
        n = value;
    }
void display() const {
        cout << "Number: " << n;
    }
};

int main()
{
    const number num(23);
    num.display();
    return 0;
}   