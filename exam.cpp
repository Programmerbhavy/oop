/*
wap cpp create a class exam to overload result() function using 
case 1 : one subject score & display it
case 2 : two subject score and & display it
case 3: three subject score & display its total score & percentage score 
*/

#include <iostream>
#include <string>
using namespace std;

class Exam
{
public:
    void result(int s1)
    {
        cout << "\nScore of Subject 1 is: " << s1;
    }

    void result(int s1, int s2)
    {
        cout << "\nTotal score of Subject 1 and Subject 2 is: " << s1 + s2;
    }

    void result(int s1, int s2, int s3)
    {
        int total = s1 + s2 + s3;
        float percentage = total / 3.0;

        cout << "\nTotal score of Subject 1, Subject 2 and Subject 3 is: " << total;
        cout << "\nPercentage of three subjects is: " << percentage;
    }
};

int main()
{
    Exam e;

    e.result(80);
    e.result(80, 90);
    e.result(80, 90, 85);

    return 0;
}
