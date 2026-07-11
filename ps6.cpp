#include<iostream>
using namespace std;
class complex

{
    private:
    int x;
    int y;

    public:
    void setdata()
    
    {
    cout<<"\n Enter x and y ";
    cin >> x >> y;
    }

    complex add(complex obj1,complex obj2)
    {
        complex ans;
        ans.x = obj1.x + obj2.x;
        ans.y = obj1.y + obj2.y;
        return ans;
    }
    void display()
    {
        cout<<"\n value of x"<<x;
        cout<<"\n value of y"<<y;
    }
};

int main()
{
    complex obj1,obj2,obj3;
    system("cls");
    obj1.setdata();
    obj2.setdata();

    obj1.display();
    obj2.display();

    obj3=obj3.add(obj1,obj2);
    cout<<"\n addition of 2 objects \n";
    obj3.display();

    return 0;
}