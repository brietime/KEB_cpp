#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    long elapsedSeconds = time(0);
    int currentSecond = elapsedSeconds % 60;

    long elapsedMinutes = elapsedSeconds / 60;
    int currentMinute = elapsedMinutes % 60;

    long elapsedHours = elapsedMinutes / 60;
    int currentHour = elapsedHours % 24;

    cout << "현재시간 = ";
    cout << currentHour << " : " << currentMinute << " : " << currentSecond;
    return 0;
}