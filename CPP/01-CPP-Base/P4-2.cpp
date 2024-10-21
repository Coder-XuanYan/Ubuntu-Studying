#include <iostream>

using namespace std;

// 全缺省(全都可以缺)
void Func1(int a = 10, int b = 20, int c = 30)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

int main()
{
    Func1();
    Func1(1);
    Func1(1, 2);
    Func1(1, 2, 3);

    return 0;
}
