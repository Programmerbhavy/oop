/*
WAP TO CREATE A BASE CLASS STUDENT CONTAINIG ROLLNO AND NAME.DERIVE A CLASS RESULT 
CONTAINING MARK OF THREE SUBJECTS CALCULATE AND DISPLAY THE TOTAL MARKS 
*/

#include<iostream>
#include<string.h>

using namespace std;

class student
{
    public:

    int rno;
    string name;
void getstudent()
    {
        cout << "\nEnter Name: ";
        cin >> name;
        cout << "\nEnter Roll no: ";
        cin >> rno;
    }
    void displaystudent()
    {
        cout<<"\nname :-"<<name;
        cout<<"\nROLLNO :-"<<rno;
    }
};
class result : public student
{
    private:
     int s1,s2,s3;
     public:
void getresult()
        {
            getstudent();
            cout<<"\n Enter a subject 1 marks :-";
            cin>>s1;
            cout<<"\n Enter a subject 2 marks  :-";
            cin>>s2;
            cout<<"\n Enter a subject 3 marks :-";
            cin>>s3;
        }
         void displayresult()
        {
            displaystudent();
            int Total = s1+s2+s3;
            cout<<" \n Subject 1 :- "<<s1;
            cout<<" \n Subject 2 :- "<<s2;
            cout<<" \n Subject 3 :- "<<s3;
            cout<<"\ntotal :- "<<Total;
        }
        

};
int main()
{
    result r;
    r.getresult();
    r.displayresult();
    return 0;
}