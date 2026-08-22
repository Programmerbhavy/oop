/* wap in cpp to create a class complex with data members for the real and imaginary parts.overload the +
operator to add two complex number object.accept two complex number for the user and display their sum.
*/
#include<iostream>
using namespace std;

class complex
{
    public:
    int r, im;

    complex(int a=0,int b=0)
    {
        r=a;
        im=b;
    }
    complex operator+(const complex &obj)
    {
        complex temp;
        temp.r = r + obj.r;
        temp.im = im +obj.im;
        return temp;
    }
    void display()
    {
        cout<<"\n r "<<r<<"\n im "<<im;
    }
};

int main()
{
    complex c1(10,30),c2(40,50),c3;
    c3=c1+c2;
    c3.display();

    return 0;
}