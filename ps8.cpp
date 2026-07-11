#include<iostream>
using namespace std;

class number{
int n;
public:
number(int num){
    n=num;
}
//copy constructor
number(number &obj)
{
    n=obj.n;
}
void display()
{
    cout<<"\n N is "<<n;
}
};

int main()
{
    number obj1(101);
    number obj2(obj1);
    system("cls");
    obj2.display();
    return 0;
}