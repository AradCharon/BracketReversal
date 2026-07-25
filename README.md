# 🪜 Bracket Reversal

A clean, modular, and efficient C++ implementation of the **Minimum Bracket Reversal** problem using a greedy algorithm.

This project was developed as part of my **Data Structures and Algorithms course project during my 3rd semester at Amirkabir University of Technology**.

Although the problem itself is algorithmic and small in scale, the main goal was to practice and apply fundamental concepts from data structures and algorithms, including greedy strategies, complexity analysis, correctness proofs, and efficient problem solving.

Additionally, this project helped me practice professional software development concepts such as modular C++ architecture, clean code principles, unit testing, and project organization as part of my journey toward becoming a Machine Learning and AI Engineer.

---

# 📖 Overview

Bracket Reversal is a classic algorithmic problem where the goal is to find the minimum number of bracket reversals required to make an unbalanced bracket sequence valid.

Given a sequence containing only:

```
(
)
```

we can reverse individual brackets:

```
( → )
```

or:

```
) → (
```

The objective is to calculate the minimum number of operations needed to create a balanced bracket sequence.

Instead of using extra data structures, this project implements an optimized greedy solution with:

- Single-pass traversal
- Constant extra memory
- Formal correctness analysis
- Modular C++ project structure

The focus of this project is not only solving the problem, but also demonstrating algorithmic thinking and clean software engineering practices.

---

# ✨ Features

⚡ Efficient greedy algorithm  
🧠 Single-pass solution  
📊 Formal time and space complexity analysis  
✅ Correctness proof using mathematical reasoning  
🧩 Modular C++ architecture  
🏗️ Separation of interface and implementation  
🧪 Automated unit testing  
📦 CMake-based build system  
📝 Well-documented code  
🔧 Easily extensible structure  

---

# 🧠 Algorithmic Concepts

This project demonstrates the following concepts:

- Data Structures and Algorithms
- Greedy Algorithms
- Algorithm Design
- Invariants
- Correctness Proof
- Complexity Analysis
- String Processing
- Mathematical Reasoning
- Modular Programming
- Separation of Concerns
- Header and Source File Separation
- Unit Testing
- CMake Build System

---

# 📂 Project Structure

```
BracketReversal/
│
├── include/
│   └── bracket_reversal.hpp       # Function declarations
│
├── src/
│   ├── main.cpp                   # Application entry point
│   └── bracket_reversal.cpp       # Algorithm implementation
│
├── tests/
│   └── test_bracket.cpp           # Automated tests
│
├── CMakeLists.txt
├── LICENSE
├── README.md
└── .gitignore
```

---

# ⚙️ How It Works

The project is divided into independent modules, each responsible for a specific task.

---

## main.cpp

Application entry point.

Responsibilities:

- Receive input from the user
- Call the bracket reversal algorithm
- Display the result

The main function contains no algorithmic logic.

---

## bracket_reversal.hpp

Contains the public interface of the algorithm.

Responsibilities:

- Declare available functions
- Provide communication between different source files

This separates the interface from the implementation.

---

## bracket_reversal.cpp

Contains the core greedy algorithm.

The algorithm maintains:

```
balance
```

which represents:

```
number of '(' - number of ')'
```

During traversal:

- Opening brackets increase balance.
- Closing brackets decrease balance.
- Negative balance means an unmatched closing bracket exists.
- That bracket must be reversed.

At the end:

- Remaining positive balance represents unmatched opening brackets.
- Half of them need to be reversed.

---

## tests/test_bracket.cpp

Contains automated tests.

The tests verify:

- Already balanced sequences
- Only opening brackets
- Only closing brackets
- Mixed invalid sequences
- Empty input

---

# 🧮 Algorithm Analysis

## Greedy Strategy

The algorithm processes the string from left to right.

Whenever an unmatched closing bracket appears, it is immediately reversed.

This decision is optimal because:

- A closing bracket without a previous opening bracket can never become valid later.
- Delaying this correction cannot reduce the number of required operations.

---

# ✅ Correctness Proof

## Lemma 1

If the balance becomes negative during traversal, at least one closing bracket is unmatched.

### Proof

The balance is defined as:

```
balance = number of '(' - number of ')'
```

If:

```
balance < 0
```

then:

```
number of ')' > number of '('
```

Therefore, there exists an unmatched closing bracket.

Reversing one closing bracket is necessary to restore validity.

---

## Lemma 2

Remaining unmatched opening brackets require exactly `balance / 2` reversals.

### Proof

After processing the string:

```
balance > 0
```

means there are extra opening brackets.

One operation:

```
( → )
```

reduces the imbalance by 2.

Therefore:

```
balance / 2
```

operations are both necessary and sufficient.

---

## Theorem

The algorithm returns the minimum possible number of reversals.

### Proof

The algorithm handles all possible imbalance cases:

1. Extra closing brackets:
   - Each one requires exactly one reversal.
   - The algorithm performs only necessary reversals.

2. Extra opening brackets:
   - Each reversal fixes two unmatched opening brackets.
   - The algorithm performs exactly the required number.

Therefore, the returned value is optimal.

---

# 📊 Complexity Analysis

Let:

```
n = length of input string
```

## Time Complexity

The algorithm scans the input exactly once.

```
O(n)
```

---

## Space Complexity

Only two integer variables are used:

```
balance
reversals
```

No additional data structures are required.

```
O(1)
```

---

# ⚙️ Installation

Clone the repository:

```bash
git clone https://github.com/AradCharon/BracketReversal.git
```

Move into the project directory:

```bash
cd BracketReversal
```

Create a build directory:

```bash
mkdir build
cd build
```

Generate build files:

```bash
cmake ..
```

Compile the project:

```bash
make
```

---

# 🚀 Running the Project

Run the executable:

```bash
./BracketReversal
```

Example:

```
Input:
))((

Output:
2
```

---

# 🧪 Running Tests

Run:

```bash
./BracketReversalTests
```

Expected output:

```
All tests passed successfully!
```

---

# 📚 Technologies Used

- C++17
- Data Structures & Algorithms
- CMake
- Standard Template Library (STL)
- Git
- GitHub

---

# 🎯 What I Learned

Through this project, I practiced and improved my understanding of:

- Applying data structures and algorithms concepts in a practical project
- Implementing greedy algorithms learned in coursework
- Designing greedy solutions
- Proving algorithm correctness
- Analyzing time and space complexity
- Writing modular C++ applications
- Separating interface and implementation
- Building projects with CMake
- Writing automated tests
- Organizing professional GitHub repositories

---

# 🚀 Future Improvements

Possible future enhancements include:

- Adding GoogleTest framework
- Adding GitHub Actions for Continuous Integration
- Improving command-line interface
- Supporting multiple bracket types:

  - `()`
  - `{}`
  - `[]`

- Adding benchmark tests for large inputs
- Creating a reusable bracket validation library

---

# 👨‍💻 Author

**Arad Shafiee**

Mathematics & Computer Science Student

Interested in:

- Artificial Intelligence
- Machine Learning
- Data Mining
- Software Engineering
- Algorithms

GitHub:

https://github.com/AradCharon

---

# ⭐ Repository

If you found this project useful or interesting, consider giving it a ⭐ on GitHub.