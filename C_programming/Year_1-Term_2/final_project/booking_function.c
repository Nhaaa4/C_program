// booking function by Chheang Sovanpanha
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include "account_function.c"

// declare struct of booking
struct Booking
{
    char name[50];
    char type_of_bus[50];
    char source[50];
    char destination[50];
    int date_day, date_month, date_year;
    char time[50];
    int num_seat, id;
    float price;
    char select_seat[20][5];
    int check;
} b;

// function display seat
void show_seats()
{
    int r, c;
    char seat[10][2][5] = {
        {"A1", "B1"},
        {"A2", "B2"},
        {"A3", "B3"},
        {"A4", "B4"},
        {"A5", "B5"},
        {"A6", "B6"},
        {"A7", "B7"},
        {"A8", "B8"},
        {"A9", "B9"},
        {"A10", "B10"},
    };
    printf("Show Seats: \n");
    for (r = 0; r < 10; r++)
    {
        for (c = 0; c < 2; c++)
        {
            printf("[%s]\t", seat[r][c]);
        }
        printf("\n");
    }
}

// function to check if a year is a leap year
bool leap_year(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// function to check if a date is valid
bool valid_date(int day, int month, int year)
{
    if (year < 1900 || year > 2100)
        return false;

    if (month < 1 || month > 12)
        return false;

    if (day < 1)
        return false;

    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leap_year(year) && month == 2)
    {
        return day <= 29;
    }
    return day <= days_in_month[month - 1];
}

// function to check if the entered date is before the current date
bool check_date(int day, int month, int year)
{
    time_t t = time(NULL); // get seconds from jan 1 1970 until now
    struct tm *current = localtime(&t); // convert seconds to readable time

    int current_year = current->tm_year + 1900;
    int current_month = current->tm_mon + 1;
    int current_day = current->tm_mday;

    if (year < current_year)
    {
        return false;
    }
    else if (year == current_year)
    {
        if (month < current_month)
        {
            return false;
        }
        else if (month == current_month)
        {
            return day >= current_day;
        }
    }
    return true;
}

// prompts user to collect information
void get_information()
{
    int i, j;
    printf("Type of bus: %s\n", b.type_of_bus);
    printf("Direction: %s -> %s\n", b.source, b.destination);
    printf("Time: %s\n", b.time);
    fflush(stdin);
    printf("Name: ");
    scanf("%[^\n]", &b.name);
    do
    {
        printf("Please, Enter date (DD/MM/YYYY): ");
        scanf("%d/%d/%d", &b.date_day, &b.date_month, &b.date_year);
        if (!valid_date(b.date_day, b.date_month, b.date_year) || !check_date(b.date_day, b.date_month, b.date_year))
        {
            printf("Invalid date. Please enter a valid date.\n");
        }
    } while (!valid_date(b.date_day, b.date_month, b.date_year) || !check_date(b.date_day, b.date_month, b.date_year));
    printf("Price per seat: %.2f\n", b.price);
    show_seats();
    fflush(stdin);
    do
    {
        printf("How many seat do you want? : ");
        scanf("%d", &b.num_seat);
        if (b.num_seat > 0 && b.num_seat < 21)
        {
            printf("Please, choose seat(s): ");
            for (i = 0; i < b.num_seat; i++)
            {
                scanf("%s", &b.select_seat[i]);
            }
        }
        else
        {
            printf("You should choose under 20 seats.\n");
        }
    } while (b.num_seat <= 0 || b.num_seat >= 21);
}

// set time phnompenh to siemreap or siemreap to phnompenh
void time_to_siemreap()
{
    int time;
    do
    {
        printf("=================>> Time <<=================\n");
        printf("||          Start    ->    Arrive         ||\n");
        printf("||       1.  5:30          11:00          ||\n");
        printf("||       2.  7:30          13:30          ||\n");
        printf("||       3. 10:30          16:30          ||\n");
        printf("============================================\n");
        printf("Please, Choose time for traveling: ");
        scanf("%d", &time);
        switch (time)
        {
        case 1:
            strcpy(b.time, "5:30 -> 11:00 (5h30mn)");
            break;

        case 2:
            strcpy(b.time, "7:30 -> 13:30 (6h00mn)");
            break;

        case 3:
            strcpy(b.time, "10:30 -> 16:30 (6h00mn)");
            break;

        default:
            printf("Please, choose any menu which have in system.\n");
            sleep(3);
            system("cls");
        }
    } while (time <= 0 || time >= 4);
}

// set time phnompenh to Preah Sihanouk or Preah Sihanouk to phnompenh
void time_to_sihanouk()
{
    int time;
    do
    {
        printf("=================>> Time <<=================\n");
        printf("||          Start    ->    Arrive         ||\n");
        printf("||       1.  6:00          8:30           ||\n");
        printf("||       2.  8:00          11:00          ||\n");
        printf("||       3. 12:40          15:40          ||\n");
        printf("============================================\n");
        printf("Please, Choose time for traveling: ");
        scanf("%d", &time);
        switch (time)
        {
        case 1:
            strcpy(b.time, "6:00 -> 8:30 (2h30mn)");
            break;

        case 2:
            strcpy(b.time, "8:00 -> 11:00 (3h00mn)");
            break;

        case 3:
            strcpy(b.time, "12:40 -> 15:40 (3h00mn)");
            break;
        default:
            printf("Please, choose any menu which have in system.\n");
            sleep(3);
            system("cls");
        }
    } while (time <= 0 || time >= 4);
}

// display direction and set direction
void direction()
{
    int menu;
    do
    {
        printf("___________________________________\n");
        printf("|                                 |\n");
        printf("|            Directions           |\n");
        printf("|_________________________________|\n\n");
        printf("1. Phnom Penh     ->   Siem Reap\n");
        printf("2. Siem Reap      ->   Phnom Penh\n");
        printf("3. Phnom Penh     ->   Preah Sihanouk\n");
        printf("4. Preah Sihanouk ->   Phnom Penh\n");
        printf("**NOTE: Phnom Penh - Siem Reap (15.25$)\n");
        printf("        Phnom Penh - Preah Sihanouk (10.25$)\n");
        printf("Please, choose number of direction: ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            strcpy(b.source, "Phnom Penh");
            strcpy(b.destination, "Siem Reap");
            b.price = 15.25;
            system("cls");
            time_to_siemreap();
            system("cls");
            get_information();
            break;

        case 2:
            strcpy(b.source, "Siem Reap");
            strcpy(b.destination, "Phnom Penh");
            b.price = 15.25;
            system("cls");
            time_to_siemreap();
            system("cls");
            get_information();
            break;

        case 3:
            strcpy(b.source, "Phnom Penh");
            strcpy(b.destination, "Preah Sihanouk");
            b.price = 10.25;
            system("cls");
            time_to_sihanouk();
            system("cls");
            get_information();
            break;

        case 4:
            strcpy(b.source, "Phnom Penh");
            strcpy(b.destination, "Siem Reap");
            b.price = 10.25;
            system("cls");
            time_to_sihanouk();
            system("cls");
            get_information();
            break;

        default:
            printf("Please, choose any menu which have in system.\n");
            sleep(3);
            system("cls");
        }
    } while (menu <= 0 || menu >= 5);
}

// display bus and set bus based on user's choice
void type_of_bus()
{
    int type_of_bus;

    do
    {
        printf("=============>>Type of Bus<<=============\n");
        printf("||                                     ||\n");
        printf("||      1. Mini Bus                    ||\n");
        printf("||      2. Luxury Bus                  ||\n");
        printf("||                                     ||\n");
        printf("=========================================\n");
        printf("Please,choose type of bus: ");
        scanf("%d", &type_of_bus);
        switch (type_of_bus)
        {
        case 1:
            strcpy(b.type_of_bus, "Mini Bus");
            system("cls");
            direction();
            break;
        case 2:
            strcpy(b.type_of_bus, "Luxury Bus");
            system("cls");
            direction();
            break;

        default:
            printf("Please, Choose any bus which have in system.\n");
            sleep(3);
            system("cls");
            break;
        }
    } while (type_of_bus != 1 && type_of_bus != 2);
}

// generate invoice's id
int id_invoice()
{
    srand(time(NULL));
    return rand() % 10000;
}

// output receipt
void show_data()
{
    int i;
    b.id = id_invoice();
    system("cls");
    printf("====================>>Receipt<<====================\n");
    printf("Invoice: #%d\n", b.id);
    printf("Name:  %s\n", b.name);
    printf("Phone: %s\n", l.phone_number);
    printf("---------------------------------------------------\n");
    printf("Date Travel: %d/%d/%d\n", b.date_day, b.date_month, b.date_year);
    printf("Type of bus: %s\n", b.type_of_bus);
    printf("Time:        %s\n", b.time);
    printf("Direction:   %s -> %s\n", b.source, b.destination);
    printf("Seat(s): ");
    for (i = 0; i < b.num_seat; i++)
    {
        printf("    %s\t", b.select_seat[i]);
    }
    printf("\nPrice:       %.2f\n", b.price);
    printf("Total:       %.2f\n", b.price * b.num_seat);
    printf("===================================================\n");
}

// store data in file
void store_data()
{
    int i;
    b.id = id_invoice();

    FILE *f;
    f = fopen("infor_passenger.txt", "a+");

    b.check = 1;
    if (!f)
    {
        printf("Error Booking");
        b.check == 0;
        exit(8);
    }
    fprintf(f, "%d, %d, %d, ", b.date_day, b.date_month, b.date_year);
    fprintf(f, "%d, ", b.id);
    fprintf(f, "%s, ", b.name);
    fprintf(f, "%s, ", l.phone_number);
    fprintf(f, "%s, ", b.type_of_bus);
    fprintf(f, "%s, ", b.time);
    fprintf(f, "%s, %s, ", b.source, b.destination);
    for (i = 0; i < b.num_seat; i++)
    {
        fprintf(f, "%s ", b.select_seat[i]);
    }
    fprintf(f, ", %.2f, ", b.price);
    fprintf(f, "%.2f\n", b.price * b.num_seat);
    fclose(f);
}

// booking function
void booking_function()
{
    type_of_bus();
    store_data();
    // if can not store in file, so booking failed
    if (b.check)
    {
        show_data();
        printf("Your Booking successful....!\n");
    }
    else
        printf("Your Booking failed....!\n");
}