#include <iostream>

using namespace std;

//函数重载

int Add(int left, int right)
{
    return left + right;
}

double Add(double left, double right)
{
    return left + right;
}

long Add(long left, long right)
{
    return left + right;
}

void Func1(int i, char ch)
{
    cout << ch << "=" << i << endl;
}


void Func1(char ch, int i)
{
    cout << ch << "=" << i << endl;
}

int main()
{
    cout << Add(2, 3) << endl;
    cout << Add(2.1, 3.6) << endl;
    Func1(1, 'c');

    return 0;
}

// 问题：
// 1、什么是函数重载
// 2、为什么C++支持，C语言不支持
// 编译过程
// 预处理 -》头文件展开/宏替换/条件编译/去掉注释
// list.i  test.i
// 编译 -》检查语法，生成汇编代码
// list.s  test.s
// 汇编 -》汇编代码转成二进制的机器码
// list.o  test.o  
// 链接 -》将两个目标文件链接到一起
//
