#include <stdio.h>
int fun1(int x, int y) {
    if(x==0)
        return y;
    else
        return fun1(x-1,x+y);
}
int main() {
    int a = 5, b = 2,ans;
    ans=fun1(a,b);
    printf("%d\n",ans);
    return 0;
}