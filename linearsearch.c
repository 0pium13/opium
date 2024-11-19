#include <stdio.h>

int main() {
    int num, i;
    int a[6], f = 0;
    for(i = 0; i < 6; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &num);
    for(i = 0; i < 6; i++) {
        if(a[i] == num) {
            printf("Element found at index %d\n", i);
            f = 1;
            break;
        }
    }
    if(f == 0) {
        printf("Element not found\n");
    }

    return 0;
}
