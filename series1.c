#include <stdio.h>
int fact(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}
void main() {
    int i,a;
    float sum=0;
    printf("Enter a number: ");
    scanf("%d", &i);
    for (int a = 1; a<= i;a++) {
        sum = sum + (float)a / fact(a);
    }
    printf("The result of sum = %f\n", sum);
}