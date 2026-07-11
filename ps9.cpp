#include<iostream>
#include<string.h>

using namespace std;

class person
{
    private:
    char *pname;

    public:
    person(char *str)
    {
        pname = new char[strlen(str)+1];
        strcpy(pname,str);
    }
    void display()
    {
        cout<<"\n person name is :- "<< pname;
    }

    ~person()
    {
        cout<<"\n releases the memory ";
    }

};

int main()
{
    person obj("shriram");
    system("cls");
    obj.display();
    return 0;
}