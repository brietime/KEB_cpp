#include <iostream>
using namespace std;

int main()
{
    int balance = 0;
    int transaction;

    cout << "첫번째 거래 금액 입력: ";
    cin >> transaction;
    balance = balance + transaction;

    cout << "두번째 거래 금액 입력: ";
    cin >> transaction;
    balance = balance + transaction;

    cout << "세번째 거래 금액 입력: ";
    cin >> transaction;
    balance = balance + transaction;

    cout << "계좌의 잔액은 "<< balance << "달러입니다."<< endl;
    return 0;
}