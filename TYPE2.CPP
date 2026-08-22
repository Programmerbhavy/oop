#include<iostream>
#include<conio.h>
using namespace std;

class distance
    public:
    float d;

    distances()
    {
        d=0;
    }
    distances(float a)
    {
        d=a;
    }
    operator float()
    {
        return d;
    }
    void display()
    {
        cout<<"\n Class type value "<<d;
    }

};

int main()
{
    distances obj(65.5);

    float f;
    f=obj;

    cout<<"\n Recevide value from obj "<<f;

    obj.display();
 
    return 0;

}