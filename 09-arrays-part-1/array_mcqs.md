# 🎯 C++ Arrays & DSA — Comprehensive MCQ Master Series
> **A curated, highly visual practice set covering Array Fundamentals, Pointer Decay, Memory Layout, STL Vector, and Time Complexity in C++**

---

<div align="center">

![C++](https://img.shields.io/badge/C%2B%2B-17%2F20-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![DSA](https://img.shields.io/badge/DSA-Arrays%20%26%20Vectors-FF6B6B?style=for-the-badge&logo=leetcode&logoColor=white)
![Questions](https://img.shields.io/badge/Total%20MCQs-13%20Questions-4ECDC4?style=for-the-badge)
![Difficulty](https://img.shields.io/badge/Difficulty-Beginner%20to%20Advanced-FFE66D?style=for-the-badge)

</div>

---

## 📑 Table of Contents

| # | Question Title | Topic | Level | Quick Link |
|---|---|---|:---:|:---:|
| **01** | Array Decay & `sizeof` in Functions | Pointer Decay | 🟡 Medium | [Jump to MCQ 1](#-mcq-1-array-decay--sizeof-in-functions) |
| **02** | Partial Zero-Initialization Guarantee | Array Initialization | 🟢 Easy | [Jump to MCQ 2](#-mcq-2-partial-zero-initialization-guarantee) |
| **03** | Out-of-Bounds Access Behavior | Undefined Behavior | 🟢 Easy | [Jump to MCQ 3](#-mcq-3-out-of-bounds-access-behavior) |
| **04** | Element Address Calculation Formula | Memory & Addressing | 🟡 Medium | [Jump to MCQ 4](#-mcq-4-element-address-calculation-formula) |
| **05** | Total Byte Size of Static Array | `sizeof` Operator | 🟢 Easy | [Jump to MCQ 5](#-mcq-5-total-byte-size-of-static-array) |
| **06** | `std::vector` vs. Static C-Style Array | STL Containers | 🟢 Easy | [Jump to MCQ 6](#-mcq-6-stdvector-vs-static-c-style-array) |
| **07** | Best-Case Complexity of Linear Search | Search Algorithms | 🟢 Easy | [Jump to MCQ 7](#-mcq-7-best-case-complexity-of-linear-search) |
| **08** | Dynamic Vector Resizing Complexity | Amortized Analysis | 🟡 Medium | [Jump to MCQ 8](#-mcq-8-dynamic-vector-resizing-complexity) |
| **09** | Array Navigation via Pointer Arithmetic | Pointers & Offsets | 🟡 Medium | [Jump to MCQ 9](#-mcq-9-array-navigation-via-pointer-arithmetic) |
| **10** | Insertion at Head Time Complexity | Array Operations | 🟢 Easy | [Jump to MCQ 10](#-mcq-10-insertion-at-head-time-complexity) |
| **11** | Single-Value Partial Initialization | Initialization Rules | 🟢 Easy | [Jump to MCQ 11](#-mcq-11-single-value-partial-initialization) |
| **12** | Safe Array Length in Modern C++17 | C++17 Standards | 🟡 Medium | [Jump to MCQ 12](#-mcq-12-safe-array-length-in-modern-c17) |
| **13** | Array Argument Passing Semantics | Pass by Reference/Pointer | 🟢 Easy | [Jump to MCQ 13](#-mcq-13-array-argument-passing-semantics) |

---

## ⚡ Quick Answer Key Matrix

| Q1 | Q2 | Q3 | Q4 | Q5 | Q6 | Q7 | Q8 | Q9 | Q10 | Q11 | Q12 | Q13 |
|:--:|:--:|:--:|:--:|:--:|:--:|:--:|:--:|:--:|:---:|:---:|:---:|:---:|
| **B** | **C** | **D** | **C** | **B** | **C** | **A** | **C** | **B** | **C** | **B** | **B** | **B** |

---

<br>

### 🔷 MCQ 1: Array Decay & `sizeof` in Functions
`Topic: Pointers & Decay` • `Level: 🟡 Medium`

Consider the following C++ snippet:

```cpp
#include <iostream>
using namespace std;

void analyzeArray(int arr[]) {
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size;
}

int main() {
    int data[] = {10, 20, 30, 40, 50};
    analyzeArray(data);
    return 0;
}
```

**Assuming a 64-bit system where a pointer is 8 bytes and an integer is 4 bytes, what will be the output?**

- [ ] **A)** `5`
- [x] **B)** `2`
- [ ] **C)** `0`
- [ ] **D)** `Compilation Error`

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!WARNING]
> **Key Concept — Array Decay**:
> In C++, when an array is passed as a function argument (e.g. `int arr[]` or `int* arr`), it **decays into a raw pointer** to its first element (`int*`).
>
> Inside `analyzeArray`:
> - `sizeof(arr)` evaluates to `sizeof(int*) = 8 bytes` (on a 64-bit architecture).
> - `sizeof(arr[0])` evaluates to `sizeof(int) = 4 bytes`.
> - Calculation: $\frac{8}{4} = 2$.
>
> **Correct Answer:** **B) 2**
</details>

---

### 🔷 MCQ 2: Partial Zero-Initialization Guarantee
`Topic: Array Initialization` • `Level: 🟢 Easy`

Based on standard C++ array initialization rules, if you write:
```cpp
int arr[5] = {0};
```
and then access and print `arr[4]`, what is guaranteed to be printed?

- [ ] **A)** A garbage value
- [ ] **B)** `4`
- [x] **C)** `0`
- [ ] **D)** `Null`

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!NOTE]
> **Initialization Rule**:
> When an aggregate array is provided with an initializer list containing fewer elements than its capacity, the specified elements are initialized as given, and **all remaining elements are implicitly value-initialized (set to 0 for fundamental arithmetic types)**.
>
> ```text
> Index:     [0]   [1]   [2]   [3]   [4]
> Value:      0     0     0     0     0
>           ^--- Explicit   ^------------- Value-Initialized (0)
> ```
>
> **Correct Answer:** **C) 0**
</details>

---

### 🔷 MCQ 3: Out-of-Bounds Access Behavior
`Topic: Memory Safety & Undefined Behavior` • `Level: 🟢 Easy`

In C++, what happens if you attempt to access an array index that is out of bounds (e.g., `arr[10]` in an array of size 5)?

- [ ] **A)** The compiler throws a syntax error.
- [ ] **B)** The program automatically resizes the array to fit the new index.
- [ ] **C)** The program crashes with an "Index Out of Bounds" exception immediately.
- [x] **D)** It results in undefined behavior, which might return a garbage value or cause a segmentation fault.

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!CAUTION]
> **Why No Bounds Checking?**
> Standard C++ raw arrays do **not** perform runtime boundary checks for zero-overhead performance reasons. Accessing `arr[10]` attempts to read memory offset $(10 \times 4)$ bytes from the base pointer. This leads to **Undefined Behavior (UB)**:
> 1. It may read garbage data silently.
> 2. It may overwrite adjacent memory if written to.
> 3. It may trigger an OS Access Violation (`SIGSEGV` / Segmentation Fault).
>
> **Correct Answer:** **D) Undefined behavior**
</details>

---

### 🔷 MCQ 4: Element Address Calculation Formula
`Topic: Memory Layout & Indexing` • `Level: 🟡 Medium`

Assume the base address (the address of `arr[0]`) of an integer array is `2000`. If the size of an integer is `4 bytes`, what is the exact memory address of `arr[3]`?

- [ ] **A)** `2003`
- [ ] **B)** `2004`
- [x] **C)** `2012`
- [ ] **D)** `2016`

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!TIP]
> **Direct Memory Addressing Formula**:
> $$\text{Address of } arr[i] = \text{Base Address} + (i \times \text{sizeof}(\text{DataType}))$$
>
> Substituting the values:
> $$\text{Address of } arr[3] = 2000 + (3 \times 4) = 2000 + 12 = \mathbf{2012}$$
>
> ```text
> [2000-2003] -> arr[0]
> [2004-2007] -> arr[1]
> [2008-2011] -> arr[2]
> [2012-2015] -> arr[3]  <--- Target Address
> ```
>
> **Correct Answer:** **C) 2012**
</details>

---

### 🔷 MCQ 5: Total Byte Size of Static Array
`Topic: sizeof Operator & Storage` • `Level: 🟢 Easy`

What is the output of the following initialization?
```cpp
int arr[] = {10, 20, 30};
cout << sizeof(arr);
```
*(Assume an integer occupies 4 bytes on the target system)*

- [ ] **A)** `3`
- [x] **B)** `12`
- [ ] **C)** `4`
- [ ] **D)** `8`

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!NOTE]
> Within the scope where the array is declared, `sizeof(arr)` yields the **total memory allocated for the array in bytes**:
> $$\text{Total Size} = \text{Number of Elements} \times \text{Size of Element} = 3 \times 4 = 12 \text{ bytes}$$
>
> **Correct Answer:** **B) 12**
</details>

---

### 🔷 MCQ 6: `std::vector` vs. Static C-Style Array
`Topic: STL Vector vs. Arrays` • `Level: 🟢 Easy`

Which of the following statements is **true** regarding `std::vector` compared to a static C-style array?

- [ ] **A)** `std::vector` uses less memory than a C-style array of the same size.
- [ ] **B)** `std::vector` cannot be passed to a function by reference.
- [x] **C)** `std::vector` automatically manages its capacity and resizes dynamically.
- [ ] **D)** `std::vector` has an $O(n)$ time complexity for accessing an element by index.

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!IMPORTANT]
> **Comparison Breakdown**:
> - **A is False**: `std::vector` has a small control overhead (typically 24 bytes on 64-bit: 3 pointers for begin, end, end_of_storage).
> - **B is False**: `std::vector` can and should be passed by reference (e.g., `const vector<int>& v`) to avoid copying.
> - **C is TRUE**: `std::vector` allocates memory dynamically on the heap and automatically doubles capacity as elements are appended.
> - **D is False**: Access by index (`v[i]`) is $O(1)$ constant time, identical to raw arrays.
>
> **Correct Answer:** **C) std::vector automatically manages its capacity and resizes dynamically.**
</details>

---

### 🔷 MCQ 7: Best-Case Complexity of Linear Search
`Topic: Search Algorithms & Complexity` • `Level: 🟢 Easy`

In linear search, finding the target element involves scanning the array sequentially. What is the **best-case time complexity** if the element you are searching for is located at the very first index (`arr[0]`)?

- [x] **A)** $O(1)$
- [ ] **B)** $O(\log n)$
- [ ] **C)** $O(n)$
- [ ] **D)** $O(n^2)$

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!NOTE]
> - **Best Case**: Target is at index `0` $\rightarrow$ Found in exactly **1 comparison** $\rightarrow \mathbf{O(1)}$.
> - **Worst Case**: Target is at index `n-1` or not present $\rightarrow$ Requires **$n$ comparisons** $\rightarrow \mathbf{O(n)}$.
> - **Average Case**: Target is in the middle $\rightarrow \frac{n+1}{2}$ comparisons $\rightarrow \mathbf{O(n)}$.
>
> **Correct Answer:** **A) O(1)**
</details>

---

### 🔷 MCQ 8: Dynamic Vector Resizing Complexity
`Topic: Vector Internals & Reallocation` • `Level: 🟡 Medium`

When a `std::vector` runs out of internal capacity and triggers a reallocation/growth step, what is the time complexity of that **specific, individual** resizing operation?

- [ ] **A)** $O(1)$
- [ ] **B)** $O(\log n)$
- [x] **C)** $O(n)$
- [ ] **D)** $O(n^2)$

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!WARNING]
> **Single Resizing vs. Amortized Time**:
> 1. **That Specific Resizing Step**: The vector allocates a new memory chunk (usually $2\times$ the capacity) and must copy/move all $N$ existing elements over. This single step takes **$O(n)$ time**.
> 2. **Amortized Time across all insertions**: Because resizes happen exponentially infrequently ($1, 2, 4, 8, 16, \dots$), the average cost per `push_back()` is **$O(1)$ amortized**.
>
> **Correct Answer:** **C) O(n)**
</details>

---

### 🔷 MCQ 9: Array Navigation via Pointer Arithmetic
`Topic: Pointers & Dereferencing` • `Level: 🟡 Medium`

Consider pointer arithmetic. If `int *ptr = arr;` points to the first element of an array, how would you access the value of the **third element (index 2)** using `ptr`?

- [ ] **A)** `ptr[3]`
- [x] **B)** `*(ptr + 2)`
- [ ] **C)** `*ptr + 2`
- [ ] **D)** `&ptr[2]`

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!TIP]
> **Pointer Arithmetic Equivalent Table**:
> | Expression | Meaning | Evaluation |
> |---|---|---|
> | `ptr[2]` or `*(ptr + 2)` | Value at index 2 (3rd element) | ✅ **Correct** |
> | `ptr[3]` | Value at index 3 (4th element) | ❌ Off-by-one |
> | `*ptr + 2` | `arr[0] + 2` (adds 2 to first element) | ❌ Arithmetic on value |
> | `&ptr[2]` | Address of the 3rd index element | ❌ Yields pointer, not value |
>
> **Correct Answer:** **B) *(ptr + 2)**
</details>

---

### 🔷 MCQ 10: Insertion at Head Time Complexity
`Topic: Array Shifts & Complexity` • `Level: 🟢 Easy`

You want to insert a new element at the very beginning (`index 0`) of an existing contiguous array of size $N$, shifting all other elements one position to the right. What is the time complexity of this operation?

- [ ] **A)** $O(1)$
- [ ] **B)** $O(\log n)$
- [x] **C)** $O(n)$
- [ ] **D)** $O(n \log n)$

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!NOTE]
> Because static arrays and vectors reside in contiguous memory, inserting at index 0 requires shifting all $N$ elements from index $i$ to $i+1$:
>
> ```text
> Before: [ 10 | 20 | 30 | 40 ]
> Shift:   -->   -->   -->   -->  (N shifts required)
> After:  [ NEW| 10 | 20 | 30 | 40 ]
> ```
> Shifting $N$ items requires $N$ operations $\rightarrow \mathbf{O(n)}$.
>
> **Correct Answer:** **C) O(n)**
</details>

---

### 🔷 MCQ 11: Single-Value Partial Initialization
`Topic: Array Value Initialization` • `Level: 🟢 Easy`

What will happen if you initialize an array as:
```cpp
int arr[5] = {5};
```
and print `arr[1]`?

- [ ] **A)** It prints `5`
- [x] **B)** It prints `0`
- [ ] **C)** It prints a garbage value
- [ ] **D)** Compilation Error

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!IMPORTANT]
> **Common Trap**:
> Initializing `{5}` does **not** fill the entire array with 5s!
> - `arr[0]` receives `5`.
> - Remaining elements `arr[1]`, `arr[2]`, `arr[3]`, `arr[4]` are zero-initialized to `0`.
>
> ```text
> arr = { 5, 0, 0, 0, 0 }
> arr[1] == 0
> ```
>
> *(To fill all elements with 5, use `std::fill`, `std::fill_n`, or a loop).*
>
> **Correct Answer:** **B) It prints 0**
</details>

---

### 🔷 MCQ 12: Safe Array Length in Modern C++17
`Topic: Modern C++ Features (C++17)` • `Level: 🟡 Medium`

Which modern C++17 feature safely returns the number of elements in a static array without relying on the traditional `sizeof(arr) / sizeof(arr[0])` macro?

- [ ] **A)** `arr.length()`
- [x] **B)** `std::size(arr)`
- [ ] **C)** `arr.size()`
- [ ] **D)** `count(arr)`

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!TIP]
> **Modern C++ Standard `<iterator>`**:
> C++17 introduced `std::size(c)`.
> - Works uniformly on STL containers (invokes `c.size()`).
> - Works on built-in raw arrays (`T(&)[N]`) and returns $N$ at compile time.
> - Prevents bugs: If a decayed pointer is passed by accident, `std::size` fails at **compile-time** rather than returning an incorrect calculation!
>
> **Correct Answer:** **B) std::size(arr)**
</details>

---

### 🔷 MCQ 13: Array Argument Passing Semantics
`Topic: Function Parameters & Reference Semantics` • `Level: 🟢 Easy`

When passing an array to a function `void process(int arr[], int n)`, any modifications made to `arr` inside the function will:

- [ ] **A)** Only affect a local copy of the array.
- [x] **B)** Modify the original array in the calling function.
- [ ] **C)** Cause a compilation error unless passed as `&arr`.
- [ ] **D)** Automatically resize the array if new elements are added.

<details>
<summary><b>💡 View Detailed Solution & Deep-Dive Explanation</b></summary>

> [!NOTE]
> **Under The Hood**:
> In C++, arrays cannot be passed by value directly. The parameter `int arr[]` is syntax sugar for `int* arr`. Because the function receives the actual memory address pointing to the first element of the caller's array, writing `arr[i] = x` alters the original memory location.
>
> **Correct Answer:** **B) Modify the original array in the calling function.**
</details>

---

<div align="center">

### 🏆 End of MCQ Series
*Keep practicing to master C++ pointers, arrays, and memory management!*

</div>
