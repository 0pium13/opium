#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0 && n%11==0){
        printf("YES\n");
    }
    else {
        printf("no %d is not divisible by 5 and 11 \n",n);
    }return 0;
}