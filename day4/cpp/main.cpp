#include <vector>

class MyCircularQueue
{
private:
    std::vector<int> data;
    int front, rear, size, capacity;

public:
    MyCircularQueue(int k) : data(k), front(0), rear(0), size(0), capacity(k) {}

    bool enQueue(int value)
    {
        if (isFull())
            return false;
        data[rear] = value;
        rear = (rear + 1) % capacity;
        ++size;
        return true;
    }

    bool deQueue()
    {
        if (isEmpty())
            return false;
        front = (front + 1) % capacity;
        --size;
        return true;
    }

    int Front()
    {
        return isEmpty() ? -1 : data[front];
    }

    int Rear()
    {
        return isEmpty() ? -1 : data[(rear + capacity - 1) % capacity];
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
    }
};
