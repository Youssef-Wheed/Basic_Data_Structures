# 📚 Data Structures in C – Learning Repository

This repository contains implementations of foundational **Data Structures (DS)** written in the **C programming language**. Each folder is focused on a specific data structure and includes clear, minimal code to help you understand the logic and memory management techniques involved.

---

## 📁 Folder Structure & Contents

Each folder in this repository represents a different data structure:

### `00 Array DS`
Basic operations using static arrays:
- Declare and initialize arrays
- Insert and delete elements at specific positions
- Search (linear and binary)
- Traverse and update elements

### `01 Stack DS Based On Array DS`
Stack implementation using arrays (LIFO behavior):
- Operations: `push()`, `pop()`, `peek()`
- Overflow and underflow handling
- Check if the stack is full or empty
- Ideal for expression parsing, backtracking, etc.

### `02 Linear Queue DS Based On Array DS`
Queue using arrays (FIFO behavior):
- `enqueue()` and `dequeue()` functions
- Maintains `front` and `rear` indexes
- Has a fixed capacity (static memory)
- Limit: space not reused after deletion

### `03 Circular Queue DS Based On Array DS`
Efficient queue using circular indexing:
- Solves linear queue’s space issue
- Uses `(rear + 1) % size` for wrap-around
- Operations: `enqueue()`, `dequeue()`, `peek()`
- Ideal for buffering tasks

### `04 Linear Linked List DS`
Singly linked list using dynamic memory:
- Node structure with `data` and `next`
- Insert at beginning, end, or specific position
- Delete a node and traverse the list
- Dynamically allocated memory using `malloc()`

### `05 Linear Queue DS Based On Stack DS`
Queue implemented using two stacks:
- Simulates queue behavior using LIFO structures
- Uses two stacks: one for input, one for output
- Demonstrates algorithmic trick for order reversal
- Frequently asked in coding interviews

---

## 🔧 Tools & Technologies

- **Language:** C (ANSI C / C99 Standard)
- **Compiler:** GCC, Clang, or any C-compatible compiler
- **Recommended IDEs:** 
  - Code::Blocks
  - Dev C++
  - Visual Studio Code with C extensions

---

## 🎯 Learning Objectives

By working with this repository, you will:

- Learn how to manually manage memory using pointers in C
- Understand how common data structures work internally
- Build a solid foundation for more advanced topics like trees, graphs, etc.
- Prepare for technical interviews and academic exams

---

