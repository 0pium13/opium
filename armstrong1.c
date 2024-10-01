#include <stdio.h>

int main() {
    int a, b, original, n;

    // Loop through all numbers between 1 and 1000
    for (int i = 1; i <= 1000; i++) {
        a = i;
        original = a;
        n = 0;

        // Check if the current number is an Armstrong number
        while (a > 0) {
            b = a % 10;
            n = n + (b * b * b);
            a = a / 10;
        }

        // If the sum of cubes equals the original number, it's an Armstrong number
        if (n == original) {
            printf("%d is an Armstrong number\n", original);
        }
    }

    return 0;
}