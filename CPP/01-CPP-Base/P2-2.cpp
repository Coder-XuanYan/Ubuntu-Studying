#include <iostream>

// 常用的库里面一些对象或类型可以展出来
// 工程项目中通常比较推荐这种用法
// 日常练习可以之间全部展出：using namespace std; 就可以
using std::cout;
using std::endl;

int cin = 10;

int main()
{
    int i = 1;
    int d = 2;
    std::cin >> i >> d;

    cout << "hello world!\n" <<endl;
    cout << i << " " << d << endl;

    cout << "cin=" << cin << endl;

    return 0;
}
