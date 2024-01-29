#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    double term;

    cout << "Enter coefficient value a: " ;
    cin >> a;
    cout << "Enter coefficient value b: " ;
    cin >> b;
    cout << "Enter coefficient value c: " ;
    cin >> c;

    //discriminant b^2 -4ac
    term = pow(b, 2) - 4 * a * c;
    if(term <0)
    {
        cout << "no root. " << endl;
    }
    else if(term = 0)
    {
        cout << "two roots are same." << endl;
        cout << "x1 = x2 = " << -b/ (2 * a) << endl;
    }
    else
    {
        cout << "there are two roots which are different. " << endl;
        cout << "x1 = " << (-b + sqrt(term)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(term)) / (2 * a) << endl;
    }
}