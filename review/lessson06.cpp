#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.141582653589793238462;
    int n;
    double s, peri, area;

    do
    {
        cout << "Enter number of polygon sides(more than 3): ";
        cin >> n;
    } while (n < 4);
    
    do
    {
        cout << "Enter length of polygon sides: ";
        cin >> s;
    } while (s <= 0.0);
    
    peri = n * s;
    area = (n * pow(s,2))/(n * tan (PI / n));
    cout << "Perimeter: " << peri << endl;
    cout << "Area: " << area << endl;
    return 0;
}