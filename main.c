#include <stdio.h>

// Helper function to print array elements
void printArray(const int arr[], int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

// 1. Linear Search: O(N) sequential search for unsorted/sorted arrays
int linearSearch(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Target found at index i
        }
    }
    return -1; // Target not found
}

// 2. Bubble Sort: O(N^2) adjacent element comparison and swapping
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // Optimization: Stop if array is already sorted
        if (swapped == 0) break;
    }
}

// 3. Binary Search: O(log N) divide-and-conquer search on sorted arrays
int binarySearch(const int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Target found at mid index
        }
        if (arr[mid] < target) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }
    return -1; // Target not found
}

int main() {
    int numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 22;

    printf("==================================================\n");
    printf("  PPS ARRAY SEARCHING & SORTING ALGORITHMS ENGINE \n");
    printf("==================================================\n\n");

    printf("[1] INITIAL UNSORTED ARRAY:\n    ");
    printArray(numbers, size);
    printf("\n");

    // 1. Test Linear Search
    printf("[2] LINEAR SEARCH (Unsorted Array):\n");
    int linIdx = linearSearch(numbers, size, target);
    if (linIdx != -1) {
        printf("    Target %d FOUND at index %d\n\n", target, linIdx);
    } else {
        printf("    Target %d NOT FOUND in array\n\n", target);
    }

    // 2. Test Bubble Sort
    printf("[3] BUBBLE SORT EXECUTION:\n");
    bubbleSort(numbers, size);
    printf("    Sorted Array: ");
    printArray(numbers, size);
    printf("\n");

    // 3. Test Binary Search
    printf("[4] BINARY SEARCH (Sorted Array):\n");
    int binIdx = binarySearch(numbers, size, target);
    if (binIdx != -1) {
        printf("    Target %d FOUND at index %d in sorted array\n", target, binIdx);
    } else {
        printf("    Target %d NOT FOUND in sorted array\n", target);
    }

    printf("\n==================================================\n");

    return 0;
}
