#include <iostream>

using namespace std;

// 半缺省（有备胎参数的可以缺省参数，没有的不可以缺省参数）
// 注意：必须从右往左连续缺省
void Func2(int a, int b = 10, int c = 20)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

int main()
{
    Func2(2);
    Func2(2, 3);
    Func2(2, 3, 4);

    return 0;
}
