#include <stdio.h>
void main() {
    int a=5;
    int *ptra = &a;
    printf("value of assigned is %d \n",ptra);
printf("address of a is %p\n",&ptra);
    printf("address of a is %p\n",*ptra);
}