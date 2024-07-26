#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
struct Account
{
    char phone_number[50];
    char password[50];
} user, l, r;
void display()
{
    printf("=============================================\n");
    printf("||                                    $    ||\n");
    printf("||     $                                   ||\n");
    printf("||         BUS RESERVATION SYSTEM          ||\n");
    printf("||                                  $      ||\n");
    printf("||      $                                  ||\n");
    printf("=============================================\n");
}

// login function by Keng Puthearith
void login_function()
{
    char get_anwser[5];
    do
    {
        FILE *f = fopen("infor.txt", "r");
        if (f == NULL)
        {
            printf("Error open file");
            exit(8);
        }

        strcpy(get_anwser, "NULL");
        system("cls");
        display();
        printf("\n\tLogin Account\n\n");
        printf("\tPhone number: ");
        scanf("%s", &l.phone_number);
        printf("\tPassword: ");
        scanf("%s", &l.password);
        
        FILE *f1;
        f1 = fopen("infor_passenger.txt", "r");

        int found = 0;
        while (fscanf(f, "%s %s", user.phone_number, user.password) != EOF)
        {
            if (strcmp(user.phone_number, l.phone_number) == 0 && strcmp(user.password, l.password) == 0)
            {
                if (f1 != NULL)
                {
                    found = 1;
                    break;
                }
            }
        }
        fclose(f1);
        fclose(f);
        if (found)
        {
            printf("\033[0;32m\tLogin successful \033[0m\n");
            sleep(2);
            system("cls");
            continue;
        }
        else
        {
            printf("\033[0;31m\tLogin failed \033[0m\n\n");
            printf("Do you want to login again?\n");
            printf("If you want, please enter \"Yes\": ");
            scanf("%s", &get_anwser);
            if (stricmp(get_anwser, "Yes") != 0)
            {
                exit(8);
            }
            sleep(2);
        }
    } while (stricmp(get_anwser, "Yes") == 0);
}

// Register function by Chhuon Nara
void register_function()
{
    int found = 0;
    char answer[5];
    FILE *f1, *f2;
    f1 = fopen("infor.txt", "r");
    if (f1 == NULL)
    {
        printf("Error open file");
        exit(8);
    }
    f2 = fopen("infor.txt", "a");
    if (f2 == NULL)
    {
        printf("Error open file");
        exit(8);
    }

    system("cls");
    display();
    printf("\n\tRegister Account\n\n");
    printf("\tPhone Number: ");
    scanf("%s", &r.phone_number);
    printf("\tPassword: ");
    scanf("%s", &r.password);

    while (fscanf(f1, "%s %s", user.phone_number, user.password) != EOF)
    {
        if (strcmp(user.phone_number, r.phone_number) == 0)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("You already have account.\n");
        printf("Do you want to log in? (Yes/No): ");
        scanf("%s", &answer);
        if (strcmpi(answer, "yes") == 0)
        {
            login_function();
            fclose(f1);
            fclose(f2);
        }
        else
        {
            fclose(f1);
            fclose(f2);
            exit(8);
        }
    }
    else
    {
        fprintf(f2, "%s %s\n", r.phone_number, r.password);
        strcpy(l.phone_number, r.phone_number);
        strcpy(l.password, r.password);
    }

    fclose(f1);
    fclose(f2);
}