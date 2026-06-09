#include <iostream>
using namespace std;
class ElectricityBill
{
private:
    string custName;
    int units;
    float charge, totalAmt;
public:
    void getData()
    {
        cout << "Enter Customer Name: ";
        cin >> custName;

        cout << "Enter Units Consumed: ";
        cin >> units;
    }
    void calculate()
    {
        if (units <= 100)
            charge = 2;
        else if (units <= 200)
            charge = 3;
        else
            charge = 5;
             
        totalAmt = units * charge;
    }
    void display()
    {
        cout << "\nCustomer Name : " << custName << "\n";
        cout << "Units Consumed: " << units << "\n";
        cout << "Charge/Unit   : " << charge << "\n";
        cout << "Total Amount  : " << totalAmt << "\n";
    }
};
int main()
{
    ElectricityBill e;
    e.getData();
    e.calculate();
    e.display();
    return 0;
}