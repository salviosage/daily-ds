
import { MinStack } from "./main";

const stack = new MinStack();
stack.push(-2);
stack.push(0);
stack.push(-3);
console.assert(stack.getMin() === -3, "Test 1 failed");
stack.pop();
console.assert(stack.top() === 0, "Test 2 failed");
console.assert(stack.getMin() === -2, "Test 3 failed");

console.log("All tests passed");
