#include <iostream>
#include "hello/hello.h"

int main(int argc, char* argv[]) {
    hello::say_hello(std::cout);
    std::cout << '\n';
    return 0;
}
