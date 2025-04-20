# 🧠 Day 4 Challenge: "Implement a Circular Queue"

## 🗒️ Problem Statement
Design a circular queue with the following operations:

- `enQueue(value: int)`: Insert an element into the circular queue. Return `true` if the operation is successful.
- `deQueue()`: Delete an element from the circular queue. Return `true` if the operation is successful.
- `Front()`: Get the front item from the queue.
- `Rear()`: Get the last item from the queue.
- `isEmpty()`: Checks whether the circular queue is empty.
- `isFull()`: Checks whether the circular queue is full.

---

## 📥 Input/Output Examples
```text
MyCircularQueue cq = new MyCircularQueue(3);
cq.enQueue(1);  // returns true
cq.enQueue(2);  // returns true
cq.enQueue(3);  // returns true
cq.enQueue(4);  // returns false
cq.Rear();      // returns 3
cq.isFull();    // returns true
cq.deQueue();   // returns true
cq.enQueue(4);  // returns true
cq.Rear();      // returns 4
```

## 🎯 Constraints
All values are integers

Capacity k is in the range 1 <= k <= 1000

Number of operations will not exceed 10⁴

---

## 📊 Performance Metrics

| Language      | Max Runtime | Max Memory |
|---------------|-------------|------------|
| Rust          | < 35ms      | < 5MB      |
| C++           | < 35ms      | < 5MB      |
| Crystal       | < 45ms      | < 6MB      |
| Go            | < 40ms      | < 5MB      |
| TypeScript    | < 60ms      | < 8MB      |
| Python        | < 90ms      | < 10MB     |

---

## 📂 Folder Structure
```text
day4/
├── rust/
├── cpp/
├── crystal/
├── go/
├── typescript/
└── python/
```

Each folder will include:

- `main.(ext)` — implementation file
- `test.(ext)` — test cases
- `README.md` — task explanation and instructions

---

## 🧪 How to Run Tests

### 🦀 Rust
```bash
cargo test
```

### 💠 Crystal
```bash
crystal spec
```

### 🧊 C++
```bash
g++ test.cpp -o test && ./test
```

### 🌀 Go
```bash
go test
```

### ⚡ TypeScript
```bash
npm install
npx ts-node test.ts
```

### 🐍 Python
```bash
python3 -m unittest test.py
```

---

✅ This task tests your understanding of pointer manipulation, modular arithmetic, and efficient memory use within custom data structures. Code implementations, tests, and explanations will follow in the next automation turn.