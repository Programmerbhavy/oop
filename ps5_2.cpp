#include<iostream>
using namespace std;

class number2;
class number1
{
  private:
  int n1;
  public:
  number1(int n)
  {
     n1=n;
  }
  friend void findmax(number1 obj1,number2 obj2);
};
class number2
{
    private:
    int n2;

    public:
    number2(int n)
    {
        n2=n;
    }
    friend void findmax(number1 obj1,number2 obj2);
};

void findmax(number1 obj1,number2 obj2)
{
    if(obj1.n1 > obj2.n2)
        cout<<"\n"<<obj1.n1<<" is max";
    else
        cout<<"\n"<<obj2.n2<<" is max";

}

int main()
{
    number1 obj1(100);
    number2 obj2(120);
    system("cls");

    findmax(obj1,obj2);

    return 0;
}
