#include <stdio.h>
struct Student {
    char name[100];
    int id;
    float mark;
};
int main () {
    int n;
    printf("Enter the number of student: ");
    scanf("%d", &n);

    struct Student stu[n];

    // user input information of student
    int i;
    for (i = 0; i < n; i++) {
        printf("\t\\> Student %d\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", &stu[i].name);
        printf("Enter ID: ");
        scanf("%d", &stu[i].id);
        printf("Enter Marks: ");
        scanf("%f", &stu[i].mark);
    }

    // find the biggest marks
    float max = stu[0].mark;  
    for (i = 1; i < n; i++) {
        if (max < stu[i].mark) {
            max = stu[i].mark;
        }
    }
    // output student's record who has the biggest marks
    printf("\nStudent's record who has the biggest marks\n");
    for (i = 0; i < n; i++) {
        if (max == stu[i].mark) {
            printf("\t\\> Student %d\n", i + 1);
            printf("Name: %s\n", stu[i].name);
            printf("ID: %d\n", stu[i].id);
            printf("Marks: %.1f\n\n", stu[i].mark);
        }
    }
    return 0;
}