#include <stdio.h>
    int e_o(int y)
{
    if (y % 2 == 0)
        return 0;
        else
            return 1;
}
void main() {
    int y,ans;
    printf("Enter a number: ");
    scanf("%d",&y);
   ans=e_o(y);
        if(e_o(ans==0))
            printf("%d is an even number\n",y);
        else
            printf("%d is an odd number\n",y);

}
