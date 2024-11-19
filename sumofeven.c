#include<stdio.h>
int main() {
    int sum=0,i,b;
    scanf("%d",&b);
    for(i=0;i<=b;i=i+2) {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
