

#include <stdio.h>]
void swap_v (int x,int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swap_v(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 4,b = 5;
    printf(" a = %d, b = %d\n",a,b);
    swap_v(&a,&b);
    printf(" output of call by value");
    printf(" a = %d, b = %d\n",a,b);
    swap_v(a,b);
    printf(" output of call by reference");
    printf(" a = %d, b = %d\n",a,b);
    return 0;
}