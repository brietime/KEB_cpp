#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 데이터 멤버, 멤버 함수 선언
class RandomInteger
{
    private:
        int low;
        int high;
        int value;
    public:
        RandomInteger(int low, int high);
        ~RandomInteger();
        //복사 생성자의 선언문
        // 안만들면 복사 생성자 호출되는 시점에 컴퓨터가 자동으로 하나 만듦
        // 복사 생성자 생성 원하지 않으면 delete 꼭 작성! 아니면 컴파일러가 오류 메세지 출력
        RandomInteger(const RandomInteger& random) = delete;
        void print() const;
};

// 데이터 멤버 3개중 2개만 초기화중
RandomInteger::RandomInteger(int lw, int hh)
:low(lw), high(hh)
{
    srand(time(0));
    int temp = rand();
    value = temp %(high - low + 1) + low;
}

RandomInteger::~RandomInteger()
{
}
//데이터 멤버 1개는 생성자 본문 내부에서 초기화중임
// print 멤버 함수에서 변경 x,  const한정자 부여
void RandomInteger::print() const
{
    cout << value << endl;
}

int main()
{
    RandomInteger r1(100,200);
    cout<< "Random number between 100 and 200: ";
    r1.print();
    
    RandomInteger r2(400,600);
    cout<< "Random number between 400 and 600: ";
    r2.print();

    RandomInteger r3(1500,2000);
    cout<< "Random number between 1500 and 2000: ";
    r3.print();
    return 0;
}