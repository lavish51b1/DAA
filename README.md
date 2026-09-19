# C Algorithms

A collection of basic algorithms implemented in C.

---

## 1. Binary Search

### What it does
* Searches for an element in a sorted array by repeatedly dividing the search space into half.

### Approach
* **Divide and Conquer**

### Example
- Array: `[10, 20, 30, 40, 50]`
- Target: `30`
- Result: `Found at index 2`

### Complexity
- Time: `O(log n)`
- Space: `O(1)` (iterative)

### Code
* [View Code](binary.c)

---

## 2. Factorial

### What it does
* Calculates the factorial of a non-negative integer.

### Approach
* Repeated multiplication.

### Example
- `n = 5`
- `5! = 5 × 4 × 3 × 2 × 1`
- Result: `120`

### Complexity
- Time: `O(n)`
- Space: `O(1)` (iterative)

### Code
* [View Code](factorial.c)

---

## 3. Tower of Hanoi

### What it does
* Moves `n` disks from the source rod to the destination rod using an auxiliary rod.

### Approach
* **Recursion**

### Example
- `n = 3`
- Minimum moves: `2³ - 1 = 7`

### Complexity
- Time: `O(2ⁿ)`
- Space: `O(n)` due to recursion

### Code
* [View Code](tower_of_hanoi.c)

---

## 4. Quick Sort

### What it does
* Sorts an array by selecting a pivot and partitioning elements around it.

### Approach
* **Divide and Conquer**

### Example
- Input: `[10, 7, 8, 9, 1]`
- Output: `[1, 7, 8, 9, 10]`

### Complexity
- Best/Average: `O(n log n)`
- Worst: `O(n²)`
- Space: `O(log n)` average

### Code
* [View Code](quicksort.c)

---

## 5. Merge Sort

### What it does
* Sorts an array by dividing it into smaller subarrays and merging them in sorted order.

### Approach
* **Divide and Conquer**

### Example
- Input: `[38, 27, 43, 3, 9]`
- Output: `[3, 9, 27, 38, 43]`

### Complexity
- Time: `O(n log n)`
- Space: `O(n)`

### Code
* [View Code](merge_sort.c)

---

## 6. Activity Selection

### What it does
* Selects the maximum number of non-overlapping activities.

### Approach
* **Greedy Algorithm**
* Selects activities based on the earliest finish time.

### Example
- Start: `[1, 3, 0, 5, 8, 5]`
- Finish: `[2, 4, 6, 7, 9, 9]`
- Selected: `A1 -> A2 -> A4 -> A5`

### Complexity
- Time: `O(n²)` (with Bubble Sort)
- Space: `O(1)`

### Code
* [View Code](activitySelection.c)

---

## 7. Matrix Multiplication

### What it does
* Multiplies two compatible matrices to produce a resultant matrix.

### Approach
* Multiplies each row of the first matrix with each column of the second matrix.

### Example
- `A = [[1, 2], [3, 4]]`
- `B = [[5, 6], [7, 8]]`
- `A × B = [[19, 22], [43, 50]]`

### Complexity
- Time: `O(n³)` for `n × n` matrices
- Space: `O(n²)` for the resultant matrix

### Code
* [View Code](matrixMultiplication.c)
