#include <stdio.h>

// Iterative Method
int iterativeSearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Recursive Method
int recursiveSearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return recursiveSearch(arr, mid + 1, high, key);
    else
        return recursiveSearch(arr, low, mid - 1, key);
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int result1 = iterativeSearch(arr, n, key);
    printf("Iterative Search: Element found at index %d\n", result1);

    int result2 = recursiveSearch(arr, 0, n - 1, key);
    printf("Recursive Search: Element found at index %d\n", result2);

    return 0;
}