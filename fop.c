#include<stdio.h>
int main() {
    /*for(int i=0; i < 100; i++) {
        printf("%d:%c\n", i,i);
    }*/
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if(ch>='a'&& ch<='z' ) {
        printf("Entered character is lower alphabet \n");
        ch=ch-32;
        printf("%c",ch);
    }
    else if(ch>='A'&&ch<='Z') {
        printf("Entered character is capital alphabet:%c \n",ch);
        ch=ch+32;
        printf("%c",ch);
    }
    else if(ch>=0&& ch<=9){
        printf("Entered character is number");
    }
    else {
        printf("Entered character is special character");
    }

   /* {
        printf("The number is a divisible by 5 and 11");
    }
    else{
        printf("The number is not divisible by 5 and 11");}*/
    return 0;
}