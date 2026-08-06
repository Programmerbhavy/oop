#include <iostream>
#include <string>
using namespace std;

class foodOrder
{
    public:
    void order(string dishname)
    {
        cout<<"\n order placed for "<<dishname;
    }
    void order(string dishname , int quantity)
    {
        cout<<"\n order placed for "<<quantity<<" "<<dishname;
    }
    void order(string dishname , int quantity,float discount)
    {
        cout<<"\n order placed for "<<quantity<<" "<<dishname<<" with discount of "<<discount;
    }
};

int main()
{
    foodOrder obj;
    obj.order("Pizza",3);
    obj.order("Burger", 2);
    obj.order("Pasta", 1, 15.50);
    return 0;
}