/*
WAP IN CPP create a class Electricitybill the constructor should initialize:
    - consumer name
    - unit consumed

calculate the electricity bill using 
    -₹ 5 per unit 
*/

#include <iostream>
#include <cstring>
using namespace std;

class Elybill
{
public:
    char consumername[100];
    int unitconsumed;

    Elybill(const char name[], int unit)
    {
        strcpy(consumername, name);
        unitconsumed = unit;
    }

    void calculatebill()
    {
        int bill = unitconsumed * 5;

        cout << "\nConsumer Name : " << consumername;
        cout << "\nUnits Consumed: " << unitconsumed;
        cout << "\nElectricity Bill: " << bill << endl;
    }
};

int main()
{
    char name[100];
    int unit;

    cout << "Enter consumer name: ";
    cin>>name;

    cout << "Enter units consumed: ";
    cin >> unit;

    Elybill obj(name, unit);
    obj.calculatebill();

    return 0;
}
