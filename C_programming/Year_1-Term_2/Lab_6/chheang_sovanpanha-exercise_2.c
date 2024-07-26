#include <stdio.h>
#include <string.h>
struct Address
{
    char n_hosue[50];
    char n_rood[50];
    char city[50];
};
struct Seller 
{
    struct Address add;
    char name_seller[50];
};
struct Product
{
    struct Seller seller;
    char id[50];
    char name[50];
    char produce_date[50];
    char expire_date[50];
    char color[10];
}p[5];
int main()
{

    int i, n_color;

    for (i = 0; i < 5; i++)
    {
        printf("\nProduct %d\n", i + 1);
        fflush(stdin);
        printf("\tID: ");
        scanf("%[^\n]", &p[i].id);
        fflush(stdin);
        printf("\tName: ");
        scanf("%[^\n]", &p[i].name);
        fflush(stdin);
        printf("\tProduce date(DD-MM-YYYY): ");
        scanf("%[^\n]", &p[i].produce_date);
        fflush(stdin);
        printf("\tExpire date(DD-MM-YYYY): ");
        scanf("%[^\n]", &p[i].expire_date);
        fflush(stdin);
        printf("\tColor: 1. Red, 2. Yellow, 3. Blue, 4. White, 5. Black\n");
        do
        {
            printf("\tPlease, choose the number of color: ");
            scanf("%d", &n_color);
            if (n_color != 1 && n_color != 2 && n_color != 3 && n_color != 4 && n_color != 5){
                printf("\tYou should choose one of the number of color\n");
            }
        } while (n_color != 1 && n_color != 2 && n_color != 3 && n_color != 4 && n_color != 5);

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
        printf("\tInformation of Seller:\n");
        fflush(stdin);
        printf("\tName: ");
        scanf("%[^\n]", &p[i].seller.name_seller);
        fflush(stdin);
        printf("\tHouse number: ");
        scanf("%[^\n]", &p[i].seller.add.n_hosue);
        fflush(stdin);
        printf("\tRoad: ");
        scanf("%[^\n]", &p[i].seller.add.n_rood);
        fflush(stdin);
        printf("\tCity: ");
        scanf("%[^\n]", &p[i].seller.add.city);
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
        printf("Information of Seller:\n");
        printf("Name: %s\n", p[i].seller.name_seller);
        printf("House number: %s\n", p[i].seller.add.n_hosue);
        printf("Road: %s\n", p[i].seller.add.n_rood);
        printf("City: %s\n", p[i].seller.add.city);
        printf("======================================\n\n");
    }
    return 0;
}