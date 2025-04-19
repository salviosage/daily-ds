# 🧠 Day 3 Challenge: "Design a Stack With Min Operation"

## 🗒️ Problem Statement
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

---

## 🔧 API Specification
Implement a `MinStack` class with the following operations:

- `push(val: int)` – Push element `val` onto the stack.
- `pop()` – Removes the element on the top of the stack.
- `top() -> int` – Get the top element.
- `getMin() -> int` – Retrieve the minimum element in the stack.

---

## 📥 Input/Output Examples
```text
Input:
MinStack stack = new MinStack();
stack.push(-2);
stack.push(0);
stack.push(-3);
stack.getMin(); // Returns -3
stack.pop();
stack.top();    // Returns 0
stack.getMin(); // Returns -2
```

## 🎯 Constraints
All `val` values are integers.

Methods `pop`, `top`, and `getMin` will always be called on non-empty stacks.

Operations will not exceed 10⁴ in a single run.

---

## 📊 Performance Metrics
| Language      | Max Runtime | Max Memory |
|---------------|-------------|------------|
| Rust          | < 30ms      | < 5MB      |
| C++           | < 30ms      | < 5MB      |
| Crystal       | < 40ms      | < 6MB      |
| Go            | < 35ms      | < 5MB      |
| TypeScript    | < 50ms      | < 8MB      |
| Python        | < 80ms      | < 10MB     |

---

## 📂 Folder Structure
```plaintext
day3/
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
- `README.md` — instructions and usage

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

✅ This task tests your understanding of stack manipulation and auxiliary data structures, like using a second stack to track minimums. The implementations and results will follow in the next automation turn.