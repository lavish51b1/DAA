#include <stdio.h>

// Iterative Method
long long iterativeFactorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

// Recursive Method
long long recursiveFactorial(int n) {
    if (n == 0)
        return 1;
    return n * recursiveFactorial(n - 1);
}

int main() {
    int n = 5;
    printf("Iterative Factorial of %d = %lld\n", n, iterativeFactorial(n));
    printf("Recursive Factorial of %d = %lld\n", n, recursiveFactorial(n));
    return 0;
}