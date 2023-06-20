#include <iostream>

using namespace std;


int main() {
    //grab farenheit input
    //convert it to celsius

    int farenheit;
    cout << "Enter your Farenheit Temperature: ";
    cin >> farenheit;
    double celsius = (farenheit - 32) / 1.8;
    cout << celsius;

    return 0;
}