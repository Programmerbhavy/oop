/* 
wap  to create a product class that uses a static data member to count the total number of objacts created
and a static member function to display the count  
*/

#include<iostream>
using namespace std;

class product{

    public:
    static int count;
    product()
    {
        count++;
    }

    static void display()
    {
        cout<<"\n object created "<<count;
    }
};
  int product :: count = 0;

int main()
{
    product p1,p2;
    p1.display();
    return 0;
}
