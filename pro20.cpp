/* swapping using friend function class member */
#include<iostream>
using namespace std;
class number{

    private:
       int a,b;

    public:
       int getdata(){
            cout<<"\n Enter a :-";
            cin>>a;
            cout<<"\n Enter b :-";
            cin>>b;
       }
      
        friend void swap (number &n);
};

void swap(number &n)
{
 int temp=n.a;
 n.a=n.b;
 n.b=temp;
 cout<<"\n a:-"<<n.a<<"\n b:-"<<n.b;

}
int main()
{
 number n1;
 n1.getdata();
 swap(n1);
 return 0;
}