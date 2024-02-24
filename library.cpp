#include "library.h"

#include <iostream>

void hello() {
    std::cout << "fork static hello test: \"Hello, World!\"" << std::endl;
}

int hello_add(int a,int b){
    return (a+b+1);
}
