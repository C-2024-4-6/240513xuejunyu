#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n = 0, a = 0, b = 0;
    cout << "输入图形的高" << endl;
    while (cin >> n)
    {
        for (a = 0; a < n + 1; ++a)
        {
            for (b = 0; b < a + 1; ++b)
                cout << "*";
            cout << endl;
        }
    }
    return 0;
}