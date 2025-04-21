#include <cassert>
#include <iostream>
#include "main.cpp"

int main() {
    MyCircularQueue cq(3);
    assert(cq.enQueue(1));
    assert(cq.enQueue(2));
    assert(cq.enQueue(3));
    assert(!cq.enQueue(4));
    assert(cq.Rear() == 3);
    assert(cq.isFull());
    assert(cq.deQueue());
    assert(cq.enQueue(4));
    assert(cq.Rear() == 4);
    std::cout << "All tests passed.\n";
    return 0;
}
