#include <stdio.h>

struct student {
    char name[20];
    int roll;
    float m1, m2, m3;
};
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];
    float averages[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n",+ 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks for subject 1: ");
        scanf("%f", &s[i].m1);

        printf("Enter marks for subject 2: ");
        scanf("%f", &s[i].m2);

        printf("Enter marks for subject 3: ");
        scanf("%f", &s[i].m3);

        averages[i] = (s[i].m1 + s[i].m2 + s[i].m3) / 3;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (averages[j] < averages[j + 1]) {

                float tempAvg = averages[j];
                averages[j] = averages[j + 1];
                averages[j + 1] = tempAvg;

                struct student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\nStudents sorted by average marks (highest to lowest):\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Roll: %d, Average Marks: %.2f\n",
               s[i].name, s[i].roll, averages[i]);
    }

    printf("\nStudent with the highest marks:\n");
    printf("Name: %s, Roll: %d, Average Marks: %.2f\n",
            s[0].name, s[0].roll, averages[0]);

    return 0;
}