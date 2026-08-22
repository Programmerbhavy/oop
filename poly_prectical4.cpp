/*wap to c++ progra to create a class time containing hours,minutes,and seconds as data members. Overloads the +
operators to add two time objects. Perform the necesary concersion when seconds exceeds 60 or minutes exceed
60, and display the resulting time.*/
#include <iostream>
using namespace std;
class Distance
{
public:
    int feet, inch;

    Distance()
    {
        feet = inch = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    Distance operator+(const Distance &obj)
    {
        Distance temp;
        temp.feet = feet + obj.feet;
        temp.inch = inch + obj.inch;

        while (temp.inch >= 12)
        {
            temp.inch -= 12;
            temp.feet += 1;
        }
        return temp;
    }
    void display()
    {
        cout << "\n Feet " << feet << " inch " << inch;
    }
};
int main()
{
    Distance d1(10, 12), d2(5, 14), d3;
    d3 = d1 + d2;
    d3.display();
    return 0;
}