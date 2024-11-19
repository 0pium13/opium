#include<stdio.h>
struct student {
    char name[20];
    int roll;
    float m1,m2,m3;
}s1,s2,s3;
int main() {
    printf("Enter name:");
    scanf("%s",&s1.name);
    printf("Enter roll:");
    scanf("%d",&s1.roll);
    printf("Enter m1:");
    scanf("%f",&s1.m1);
    printf("Enter m2:");
    scanf("%f",&s1.m2);
    printf("Enter m3:");
    scanf("%f",&s1.m3);

    float total=(s1.m1+s1.m2+s1.m3)/3;

    printf("Student details:\n");
    printf("Student: %s Rollno: %i and percentage is %f\n",s1.name,s1.roll,total);
   return 0;
}