#include <stack>
#include <limits>

class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> min_stack;

public:
    void push(int val) {
        stack.push(val);
        if (min_stack.empty() || val <= min_stack.top())
            min_stack.push(val);
    }

    void pop() {
        if (stack.top() == min_stack.top())
            min_stack.pop();
        stack.pop();
    }

    int top() {
        return stack.top();
    }

    int getMin() {
        return min_stack.top();
    }
};
