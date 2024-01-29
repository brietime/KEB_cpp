#include <iostream>
using namespace std;

//단순 할당연산자 확인
int main()
{
    int x;
    int y;

    cout << "할당 표현식의 리턴값: " <<(x = 14) << endl;
    cout << "변수 x의 값: " << x << endl;
    
    cout << "할당 표현식의 리턴값: " <<(y = 63) << endl;
    cout << "변수 x의 값: " << y << endl;
    return 0;
}