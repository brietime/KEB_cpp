#include <iostream>
using namespace std;

//암묵적 자료형 변환(승격처리되는건 변환 x)
int main()
{
    int x = 123;
    long y = 140;
    double z = 114.56;
    
    //int -> unsigned int -> long -> unsigned long -> double -> long double

    cout << "x + y의 자료형: " << typeid(x + y).name() << endl;
    cout << "x + y의 값: " << x + y << endl;

    cout << "x + y + z의 자료형: " << typeid(x+y+z).name() << endl;
    cout << "x + y + z의 값: " << x+y+z << endl;
    return 0;
}