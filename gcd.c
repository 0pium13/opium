#include <stdio.h>
int add(int a, int b)
{
     int sum=a+b;
   return sum;
}
void main() {
    int x,y,ans;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    ans=add(x,y);
    printf("sum of %d & %d is %d",x,y,ans);

}
