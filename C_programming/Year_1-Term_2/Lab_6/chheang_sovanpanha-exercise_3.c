#include <stdio.h>
struct Student
{
    char first_name[50];
    char last_name[50];
    int age;
};
int main()
{
    int i;
    struct Student stu[10] = {
        {"Ilong", "Chea", 16},
        {"Mengeang", "Eng", 17},
        {"Kanika", "Chea", 21},
        {"Kimleang", "Tith", 20},
        {"Visal", "Ou", 19},
        {"Sarith", "Dou", 17},
        {"Seila", "Manh", 20},
        {"Bunheang", "Chheng", 21},
        {"Sokvisal", "Heng", 27},
        {"Panha", "Sovan", 16},

    };

    for (i = 0; i < 10; i++)
    {
        printf("==========>>Student %2d<<==========\n", i + 1);
        printf("First Name: %s \n", stu[i].first_name);
        printf("Last Name: %s \n", stu[i].last_name);
        printf("Age: %d\n", stu[i].age);
        printf("==================================\n\n");
    }

    int min = stu[0].age;

    for (i = 1; i < 10; i++)
    {
        if (min > stu[i].age)
        {
            min = stu[i].age;
        }
    }
    printf("The Youngest Student:\n");
    for (i = 0; i < 10; i++)
    {
        if (min == stu[i].age)
        {
            printf("==========>>Student %2d<<==========\n", i + 1);
            printf("First Name: %s \n", stu[i].first_name);
            printf("Last Name: %s \n", stu[i].last_name);
            printf("Age: %d\n", stu[i].age);
            printf("==================================\n\n");
        }
    }
    return 0;
}