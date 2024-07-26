/* G1 Team3 
   Member: 
   1. Chheang Sovanpanha
   2. Chhuon Nara
   3. Keng Puthearith
   4. Yim Chansreypin 
   5. Kong measchamrong
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include "cancel_function.c"
void interface()
{
    printf("===========>> WELCOME TO BUS RESERVATION <<=============\n");
    printf("|                                                      |\n");
    printf("|       1. log in                                      |\n");
    printf("|       2. Register                                    |\n");
    printf("|       3. Exit                                        |\n");
    printf("|                                                      |\n");
    printf("========================================================\n");
}
void menu_bus()
{
    printf("===========>> Bus Reservation <<===========\n");
    printf("||      1. Booking                       ||\n");
    printf("||      2. Search your booking           ||\n");
    printf("||      3. Cancel Booking                ||\n");
    printf("||      4. Exit                          ||\n");
    printf("===========================================\n");
}

void exiting()
{
    system("cls");
    for (int i = 0; i < 40; i++)
    {
        printf("\xdb");
        system("color 0");
    }
    printf("\n\n");
    printf("      Thank for using our system\n");
    printf("               Exiting\n");
    printf("\n");
    for (int i = 0; i < 40; i++)
    {
        printf("\xdb");
        system("color 0");
    }
    exit(0);
}

int main()
{
    int menu, op;
    do
    {
        system("cls");
        interface();
        printf("Please, choose the number of these: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            login_function();
            break;

        case 2:
            register_function();
            break;

        case 3:
            exiting();

        default:
            printf("You should choose one of these.\n");
            sleep(2);
            break;
        }
    } while (op <= 0 || op >= 4);
    do
    {
        system("cls");
        menu_bus();
        printf("Please, choose menu by press number key: ");
        scanf("%d", &menu);
        system("cls");
        switch (menu)
        {
        case 1:
            booking_function();
            break;

        case 2:
            search_function();
            break;

        case 3:
            cancel_function();
            break;

        case 4:
            exiting();

        default:
            printf("Please, Choose any menu from 1 to 4.\n");
            break;
        }
        sleep(2);
        printf("If you want to continue, press \"Enter\".\n");
    } while (getch() == 13);
    return 0;
}