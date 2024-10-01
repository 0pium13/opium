#include <stdio.h>

int is_prime(int y) {
    if (y <= 1)
        return 0; // not prime
    for (int i = 2; i<=y/2; i++)
        {
        if (y%i == 0)
            return 0; // not prime
        }
    return 1; // Prime
}
void main() {
    int y, ans;
    printf("Enter a number: ");
    scanf("%d", &y);

    ans = is_prime(y);

    if (ans == 1)
        printf("%d is a prime number\n", y);
    else
        printf("%d is not a prime number\n", y);
}