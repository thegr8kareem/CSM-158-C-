#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double adjacent, opposite, hypotenuse;

    cout << "Please enter the adjacent side of the triangle in cm:" << endl;
    cin >> adjacent;

    cout << "Please enter the opposite side of the triangle in cm:" << endl;
    cin >> opposite;

    hypotenuse = sqrt((adjacent * adjacent) + (opposite * opposite));
    cout << "The hypotenuse of the triangle is " << hypotenuse << " centimeters" << endl;

    return 0;
}