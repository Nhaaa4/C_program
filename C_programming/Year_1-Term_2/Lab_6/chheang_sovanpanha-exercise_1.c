#include <stdio.h>
#include <string.h>
struct Product
{
    char id[50];
    char name[50];
    char produce_date[50];
    char expire_date[50];
    char color[10];
} p[5];

int main()
{

    int i, n_color;

    for (i = 0; i < 5; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("\tID: ");
        scanf("%s", &p[i].id);
        printf("\tName: ");
        scanf("%s", &p[i].name);
        printf("\tProduce date(DD-MM-YYYY): ");
        scanf("%s", &p[i].produce_date);
        printf("\tExpire date(DD-MM-YYYY): ");
        scanf("%s", &p[i].expire_date);
        printf("\tColor: 1. Red, 2. Yellow, 3. Blue, 4. White, 5. Black\n");
        do
        {
            printf("\tPlease, choose the number of color: ");
            scanf("%d", &n_color);
            if (n_color <= 0 || n_color >= 6){
                printf("\tYou should choose one of the number of color\n");
            }
        } while (n_color <= 0 || n_color >= 6);

        switch (n_color)
        {
        case 1:
            strcpy(p[i].color, "Red");
            break;

        case 2:
            strcpy(p[i].color, "Yellow");
            break;

        case 3:
            strcpy(p[i].color, "Blue");
            break;

        case 4:
            strcpy(p[i].color, "White");
            break;

        case 5:
            strcpy(p[i].color, "Black");
            break;
        }
    }

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("============>>Product %d<<============\n", i + 1);
        printf("\nID: %s\n", p[i].id);
        printf("Name: %s\n", p[i].name);
        printf("Produce Date: %s\n", p[i].produce_date);
        printf("Expire Date: %s\n", p[i].expire_date);
        printf("Color: %s\n\n", p[i].color);
        printf("======================================\n\n");
    }
    return 0;
}