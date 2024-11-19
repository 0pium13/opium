#include<stdio.h>
void main(){
int i,j,a,num=1;
printf("Enter the number of rows:");
scanf("%d",&a);
for(i=1;i<=a;i++) {
    for(j=1;j<=i;j++) {
        printf("%d ",num);
        num++;
    }
    printf(" \n");
}
}