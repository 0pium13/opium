#include <stdio.h>
void main() {
    //right angle triangle



    /*


          int i,j;
          for(i=1;i<=5;i++) {
            for(j=1;j<=i;j++) {
                printf(" *");
            }
            printf(" \n");
          }

    */


    // upside down right angle numbers

    /*


      int i,j;
     for(i=5;i>=1;i--) {
        for(j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");}


    */


    //print number till 15
    /*



    int i,j,num=1;
    for(i=1;i<=5;i++) {
        for(j=1;j<=i;j++) {
            printf(" %d",num);
            num++;
        }
            printf("\n");


        }*/


    // print same no as rows
    /*int i,j,num=1;
    for(i=1;i<=5;i++) {
        for(j=1;j<=i;j++) {
            printf(" %d",i);
            num++;
        }
        printf("\n");
    }
    */
    // n*n

    int i,j,a;
    printf("Enter the number of rows:");
    scanf("%d",&a);
    for(i=1;i<=a;i++) {
        for(j=1;j<=a;j++) {
            printf("*");
        }
        printf("\n");
    }
}


   /* int i,j;
    for(i=1;i<=5;i++) {
        for (j=1; j <=5-i ; j++) {
            printf("   ");
        }
        for(j=1;j<=i;j++) {
            printf(" * ");
        }
        printf(" \n");
    }

        }



