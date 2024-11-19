#include <stdio.h>
long factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    return num * factorial(num - 1);
}
double sum_of_series(int n) {
    if (n == 1)
        return 1.0;
    return (double)n / factorial(n) + sum_of_series(n - 1);
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    double result = sum_of_series(n);
    printf("Sum of the series is: %.6f\n", result);
    return 0;
}