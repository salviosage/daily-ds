
import { MyCircularQueue } from "./main";

const q = new MyCircularQueue(3);
console.assert(q.enQueue(1));
console.assert(q.enQueue(2));
console.assert(q.enQueue(3));
console.assert(!q.enQueue(4));
console.assert(q.Rear() === 3);
console.assert(q.isFull());
console.assert(q.deQueue());
console.assert(q.enQueue(4));
console.assert(q.Rear() === 4);

console.log("All tests passed");
