#include <stdio.h>
int sub(int a,int b) {
    if (a>=b) {
        return a-b;
        }
    else {
        return b-a;
    }
}
int sum(int a,int b)
{
    return a+b;
}

int main() {
int a,b,c;
printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

sum(a,b);
    printf("The sum of %d and %d is %d",a,b,sum(a,b));

    sub(a,b);
    printf("The subtraction of %d and %d is %d",a,b,sub(a,b));
return 0;
}