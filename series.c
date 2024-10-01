#include <stdio.h>
void main() {
    int a, i=5;
    int **k;
    k=&i;
    a=i++;
    printf("a = %d\n",a);
    printf("address of i is %u\n",&i);// address of i
    printf("i = %d\n",i);
    a=++i;
    printf("a = %d\n",a);
    printf(" k = %u\n",k);
}