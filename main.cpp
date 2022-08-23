#include <iostream>
#include "test1/testFunc.h"
#include "test2/testFunc2.h"
int main(int argc, char const *argv[])
{
    func(100);
    func2(101);
    std::cout << "Hello World" << std::endl;
    return 0;
}
