/*
wap to in cpp demontrest hierarchical inherintance using a base class shape and 
derived classess rectangle and circle. calculate and display their areas.
*/
#include <iostream>
using namespace std;

class Shape
{
protected:
    float length, width, radius;

public:
    void getRectangleData()
    {
        cout << "Enter Length and Width: ";
        cin >> length >> width;
    }

    void getCircleData()
    {
        cout << "Enter Radius: ";
        cin >> radius;
    }
};

class Rectangle : public Shape
{
public:
    void areaRectangle()
    {
        float area;
        area = length * width;
        cout << "Area of Rectangle = " << area;
    }
};

class Circle : public Shape
{
public:
    void areaCircle()
    {
        float area;
        area = 3.14 * radius * radius;
        cout << "Area of Circle = " << area;
    }
};

int main()
{
    Rectangle r;
    Circle c;

    cout << "Rectangle Details";
    r.getRectangleData();
    r.areaRectangle();

    cout << "\n\nCircle Details";
    c.getCircleData();
    c.areaCircle();

    return 0;
}
