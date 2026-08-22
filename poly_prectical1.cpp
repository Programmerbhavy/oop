/*wap in cpp to demontrest function overloading by defined
two int
three int
two floating point number
*/

#include<iostream>
using namespace std;
class number
{
    public:

    void maximum(int a,int b)
    {
        (a<b)?cout<<"\nA is maximum "<<a:
                cout<<"\nB is maximum "<<b;
    }

    void maximum(int x,int y,int z)
    {
        if(x>y && x>z)
        {
            cout<<"\nx is maximum"<<x;
        }
        else if(y>z)
        {
            cout<<"\ny is maximum"<<y;
        }
        else
        {
            cout<<"\nz is maximum "<<z;
        }

    }
    void maximum(float p,float q )
    {
        (p>q)?cout<<"\np is maximum "<<p:
                    cout<<"\nq is maximum "<<q;
    }
};
int main()
{
    number n;
    n.maximum(10,20);
    n.maximum(10,20,30);
    n.maximum(10.5f,20.5f);
    return 0;
}