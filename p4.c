#include <stdio.h>
int reversenumber(int num, int rev) {
    if (num == 0)
        return rev;
    return reversenumber(num / 10, rev * 10 + num % 10);
}
int main() {
    int num, result;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    result = reversenumber(num,0);
    printf("Reversed number is: %d\n", result);
    return 0;
}