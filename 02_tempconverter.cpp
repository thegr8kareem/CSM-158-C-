#include <iostream>

int main()
{
    using namespace std;
    double temp, fahrenheit;
    char unit;

    cout << "*********************** Temperature converter *********************** " << endl;
    cout << "Please enter your temperature in celsius: " <<endl;
    cout << "F = Fahrenheit" << endl;
    cout << "C = Celsius" << endl;

    cout << "What unit would you like to work with? " << endl;
    cin >> unit;

    switch (unit)
    {
    case 'F':
        cout << "Enter the temperature in celsius: " << endl;
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "The temperature is: " << temp << unit << endl;

        break;
    case 'C':
        cout << "Enter the temperature in celsius: " << endl;
        cin >> temp;

        temp = (temp - 32.0) / 1.8;
        cout << "The temperature is: " << temp << unit << endl;
        break;

    default:
        cout << "Please enter in one of the values" << endl;
        break;
    }

    cout << "********************************************************************* " << endl;

    return 0;
}