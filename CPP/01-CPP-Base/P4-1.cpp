#include <iostream>

using namespace std;

// 缺省参数 -》 备胎
void Func(int a = 0)
{
    cout << a << endl;
}

// 缺省参数分为全缺省和半缺省  详情看P4-2 P4-3 

int main()
{
    // 如果传参了用传的参数
    Func(10);
    // 如果没传参就用这个备胎参数
    Func();

    return 0;
}
