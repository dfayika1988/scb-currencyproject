#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    
    double dollar, pound, euro, yen;
    const double US_to_GBP = 0.72;
    const double US_to_EUR = 0.83;
    const double US_to_JPY = 106.13;
    
    cout<< "Enter the US dollar amount\n";
    cin >> dollar;
    pound = dollar * US_to_GBP;
    euro = dollar * US_to_EUR;
    yen = dollar * US_to_JPY;
    cout << fixed << setprecision(2);
    cout <<" US dollar " << dollar << "equals to British pound" << pound << endl;
    cout <<" US dollar " << dollar <<"equals to EURO"
    << euro << endl;
    cout <<" US dollar " << dollar <<"equals to Japanese yen"
    << yen << endl;
    system("pause");
    return 0;
    
}
