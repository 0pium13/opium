#include <stdio.h>
int main() {
    int a,b,original;
    int n=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    original = a;
    while (a > 0) {
        b = a % 10;
        n = n +(b * b * b);
        a=a/10;
    }
    if(n==original) {
        printf("Number is an Armstrong number");
    }
    else {
        printf("Number is not an Armstrong number");
    }
    return 0;
}