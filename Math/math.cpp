#include <iostream>


// int main() {
//     int x = 10;
//     int y = 3;
//     int z = x + y;
//     std::cout << z;
// }


using namespace std;


int main() {
    double sales = 95000;
    cout << "Sales: $" << sales << endl;
    
    const double stateRate = .04;
    double stateTax = sales * stateRate;
    cout << "State Tax: $" << stateTax << endl;

    const double countyRate = .02;
    double countyTax = sales * countyRate;
    cout << "County Tax: $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << "Total Tax: $" << totalTax;

    return 0;
}