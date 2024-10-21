#include <iostream>

//using namespace std; //C++库中所有东西都是放在std命名空间中

int cout = 10;//不提前展出std就不会冲突
              //但是后面就会很麻烦
              //每一个都要展出
              //在日常练习不怕冲突，可以提前展出
              //在项目中，容易冲突
              //首先可以这样不提前展出
              //其次可以只单独展出其中一个或几个
              //例如：
              //using std::cout;
              //using std::endl;
              //上面只展出了两个，除了这两个剩下的还可以在外部定义为变量
              //相应的只有这两个可以在后面不用挨个声明
              //详情看P2-2.cpp

int main()
{
    std::cout << "hello world!\n" << std::endl;
    int i = 1;
    double d = 1.11;
    //第一个cout是std里面的cout，第二个cout是外部定义的整型变量cout
    std::cout << i << " " << d << cout << std::endl;

    return 0;
}

