#include <cassert>
#include <iostream>
#include "main.cpp"

int main() {
    MinStack s;
    s.push(-2);
    s.push(0);
    s.push(-3);
    assert(s.getMin() == -3);
    s.pop();
    assert(s.top() == 0);
    assert(s.getMin() == -2);
    std::cout << "All tests passed.\n";
    return 0;
}

