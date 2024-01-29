#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    int count = 0;

    while (cin >> noskipws >> ch)
    {
        if(isalpha(ch))
        {
            count++;
        }
        ch = toupper(ch);
        cout << ch;
    }
    cout << "number of alphabets: " << count;
    return 0;
}