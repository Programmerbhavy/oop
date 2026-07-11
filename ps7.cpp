#include<iostream>
using namespace std;

class rectangle
{
    private:
    int l,b;

    public:


//default
rectangle()
{
    l=b=0;
}

//parameterized

/*rectangle(int len,int bth)
{
    i=len;
    b=bth;
}*/

//parameterru=ized cons with default argument

rectangle(int len ,int bth = 100 )
{
    l= len;
    b= bth;
}

void display()
{
    cout<<"\n lenth is "<<l << "\n breth is "<<b;
}

};
int main()
{
rectangle obj1;
rectangle onj2(10,20);
rectangle obj3(25);
system("cls");
cout<<"\n default ";
obj1.display();
//cout<<"\n parameterized ";
//obj2.display();
cout<<"\n default ardument ";
obj3.display();

return 0;
}