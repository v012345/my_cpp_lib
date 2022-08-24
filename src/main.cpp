#include <iostream>
#include "testFunc1.h"
#include "testFunc2.h"
int main(int argc, char const *argv[])
{
    func1(100);
    func2(101);
    std::cout << "Hello World" << std::endl;
    return 0;
}
