#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
double sum_series(int N) {

    double sum = 0.0;
    for (int i = 1; i <= N; i++) {
        sum += (double)i / factorial(i);
    }
    return sum;
}
int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    double result = sum_series(N);
    printf("The sum of the series is: %.6f\n", result);

    return 0;
}
