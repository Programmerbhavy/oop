/* 
WAP TO CREATE A CLASS PERSON WITH DATA MEMBERS NAME AND AGE. DERIVE A CLASS STUDENT FROM PERSON WITH 
A DATA MEMBER ROLLNO ACCEPT AND DISPLAY ALL STUDENT DETAILS
*/

#include<iostream>
#include<string.h>

using namespace std;

class person 
{
   public:
   string name;
   int age;
   void persondata() 
   {
        cout << "\nEnter Name: ";
        cin >> name;
        cout << "\nEnter Age: ";
        cin >> age;
    }
    
    void displayperson()
    {
        cout<<"name :-"<<name;
        cout<<"age :- "<<age;
    }
};
class student : public person
{
    private:
        int rollno;
    public:
        void studentdata()
        {
            persondata();
            cout<<"enter a roll no :-";
            cin>>rollno;
        }

        void displaystudent()
        {
            displayperson(); 
            cout<<" roll no := "<<rollno;
        }

};

int main()
{
    student s1;
    s1.studentdata();
    s1.displaystudent();
    return 0;
}