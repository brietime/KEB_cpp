// reference
#include <iostream>
using namespace std;

int main()
{
    int score = 92;
    int& rScore = score; // reference

    cout<< "데이터 변수를 사용해서 값에 접근하기" << endl;
    cout <<"score: " << score <<endl;

    cout<< "ckawh 변수를 사용해서 값에 접근하기" << endl;
    cout <<"rScore: " << rScore <<endl;

}