# PPS Array Searching & Sorting Engine

A Semester 1 Programming for Problem Solving (PPS) C application demonstrating fundamental array algorithms: Linear Search, Bubble Sort with early-stopping optimizations, and Binary Search over sorted arrays.

## PPS Concepts Covered
* **Linear Search $O(N)$**: Iterative sequential scanning suitable for unsorted datasets.
* **Bubble Sort $O(N^2)$**: Pairwise adjacent comparison and element bubbling, optimized with a swapped flag.
* **Binary Search $O(\log N)$**: Divide-and-conquer index narrowing over sorted contiguous memory arrays.
* **Array Index Mechanics**: Safe lower/upper bound pointer updates avoiding integer overflow during midpoint evaluation (`low + (high - low) / 2`).

## How to Compile & Run
```bash
gcc main.c -o searching_sorting
./searching_sorting
