# 🧠 Day 1 Challenge: "First Unique Character"

## 🗒️ Problem Statement
Given a string, find the index of the first non-repeating character in it. If it doesn't exist, return `-1`.

### 🧪 Constraints
- The string contains only lowercase English letters.
- Length of the string: `1 <= s.length <= 10⁵`

### ✅ Requirements
**Input**  
A string `s`

**Output**  
Integer: index of the first unique character, or `-1` if none exists.

### Example
```text
Input: "leetcode"
Output: 0

Input: "loveleetcode"
Output: 2

Input: "aabb"
Output: -1
```

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

## 📊 Performance Metrics
| Language   | Max Runtime | Max Memory |
|------------|-------------|------------|
| Rust       | < 30ms      | < 5MB      |
| C++        | < 30ms      | < 5MB      |
| Crystal    | < 40ms      | < 6MB      |
| Go         | < 35ms      | < 5MB      |
| TypeScript | < 50ms      | < 8MB      |
| Python     | < 80ms      | < 10MB     |

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