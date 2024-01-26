#include <iostream>
using namespace std;

// 데이터 멤버, 멤버 함수 선언
class Circle
{
    private:
        double radius;
    public:
        double getRadius() const;
        double getArea() const;
        double getPerimeter() const;
        void setRadius(double value);
}; 
// 멤버 함수 정의
double Circle::getRadius() const
{
    return radius;
}
double Circle::getArea() const
{
    const double PI = 3.14;
    return(PI * radius * radius);
}
double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return(2 * PI * radius);
}
void Circle::setRadius(double value)
{
    radius = value;
}

int main()
{
    cout<< "Circle 1: " << endl;
    Circle circle1;
    circle1.setRadius(10.0); // 그냥 radius는 private: 접근 불가, setRadius는 public:가능
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

    cout<< "Circle 2: " << endl;
    Circle circle2;
    circle2.setRadius(20.0); // if public ??
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl;
    return 0;
}