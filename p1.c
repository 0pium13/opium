// recursive function

#include <stdio.h>
int ans=1;
int fact(int x) {
    if(x==1)
        //ans = x * fact(x-1);
        return 0;
     ans = x * fact(x-1);
}
int main() {
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);
    fact(x);
    printf("The factorial of %d is: %d\n",x,ans);
    return 0;
}