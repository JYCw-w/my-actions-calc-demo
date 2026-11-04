#include <cassert>
#include <iostream>
#include "calculator.h"

int main() {
    assert(add(2, 3) == 5);
    assert(add(10, 20) == 30);

    assert(subtract(10, 3) == 7);
    assert(subtract(20, 5) == 15);

    assert(multiply(10, 3)== 30);

    std::cout << "All tests passed!" << std::endl;

    return 0;
}
