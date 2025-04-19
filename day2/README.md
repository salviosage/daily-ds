# 🧠 Day 1 Challenge: "First Unique Character"

# 🧠 Day 2 Challenge: "Top K Frequent Elements"

## 🗒️ Problem Statement
Given an integer array `nums` and an integer `k`, return the `k` most frequent elements. You may return the answer in any order.

### 📥 Input
- `nums`: List of integers, e.g., `[1,1,1,2,2,3]`
- `k`: Integer indicating how many frequent elements to return

### 📤 Output
- List of `k` most frequent elements (order doesn't matter)

---

## 🧪 Examples
```text
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

Input: nums = [1], k = 1
Output: [1]
```

## 🧠 Constraints
1 <= nums.length <= 10⁵

-10⁴ <= nums[i] <= 10⁴

k is in the range 1 <= k <= unique elements in nums

📊 Performance Metrics
Language	Max Runtime	Max Memory
Rust	< 40ms	< 6MB
C++	< 40ms	< 6MB
Crystal	< 50ms	< 7MB
Go	< 45ms	< 6MB
TypeScript	< 60ms	< 8MB
Python	< 100ms	< 10MB


## 📂 Folder Structure for Each Language
```go
day1/
├── rust/
├── cpp/
├── crystal/
├── go/
├── typescript/
└── python/
```
Each language folder will include:

- `main.(ext)` — main implementation file
- `test.(ext)` — unit tests
- `README.md` — task instructions


## 🧪 How to Test
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
g++ -std=c++17 test.cpp -o test && ./test
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