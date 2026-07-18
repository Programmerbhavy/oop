/* WAP to create calculator class with a static member and cube of a number */
#include<iostream>
using namespace std;

class maths{
    public:
    static int a,b;
    int x;
    static void addition(){

        cout<<"\n Addition is "<<(a+b);
    }
};
   int maths::a=9;
   int maths::b=10;
   int main(){
        maths::addition();
        return 0;

   }
