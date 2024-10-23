#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int &ra = a; //ra是a的引用，引用也就是别名, a又取了个别名ra
    int &b = a;
    int &c = b;

    c = 2;

    cout << "a = " << a << endl;
    cout << "ra = " << ra << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
