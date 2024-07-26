#include <stdio.h>
struct Dob
{
    int day;
    int month;
    int year;
};
struct Student
{
    char first_name[50];
    char last_name[50];
    struct Dob dob;
};
int main()
{
    int i;
    struct Student stu[10] = {
        {"Ilong", "Chea", 16, 2, 2004},
        {"Mengeang", "Eng", 17, 3, 2003},
        {"Kanika", "Chea", 21, 9, 2003},
        {"Kimleang", "Tith", 14, 1, 2004},
        {"Visal", "Ou", 10, 9, 2005},
        {"Sarith", "Dou", 17, 8, 2006},
        {"Seila", "Manh", 16, 2, 2004},
        {"Bunheang", "Chheng", 17, 8, 2006},
        {"Sokvisal", "Heng", 27, 5, 1997},
        {"Panha", "Sovan", 2, 7, 2004},

    };

    for (i = 0; i < 10; i++)
    {
        printf("==========>>Student %2d<<==========\n", i + 1);
        printf("First Name: %s \n", stu[i].first_name);
        printf("Last Name: %s \n", stu[i].last_name);
        printf("Date of birth: %d %d %d\n", stu[i].dob.day, stu[i].dob.month, stu[i].dob.year);
        printf("==================================\n\n");
    }

    int min_day = stu[0].dob.day;
    int min_month = stu[0].dob.month;
    int min_year = stu[0].dob.year;

    // compare year, month, and day
    for (i = 1; i < 10; i++)
    {
        if (min_year < stu[i].dob.year)
        {
            if (min_month < stu[i].dob.month)
            {
                if (min_day < stu[i].dob.day)
                {
                    min_year = stu[i].dob.year;
                    min_month = stu[i].dob.month;
                    min_day = stu[i].dob.day;
                }
            }
        }
    }
    // print youngest student
    printf("The Youngest Student:\n");
    for (i = 1; i < 10; i++)
    {
        if (min_year == stu[i].dob.year)
        {
            if (min_month == stu[i].dob.month)
            {
                if (min_day == stu[i].dob.day)
                {
                    printf("==========>>Student %2d<<==========\n", i + 1);
                    printf("First Name: %s \n", stu[i].first_name);
                    printf("Last Name: %s \n", stu[i].last_name);
                    printf("Date of birth: %d %d %d\n", stu[i].dob.day, stu[i].dob.month, stu[i].dob.year);
                    printf("==================================\n\n");
                }
            }
        }
    }
    return 0;
}