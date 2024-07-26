// Search function by Yim Chansreypin
#include <stdio.h>
#include <stdbool.h>
#include "booking_function.c"
struct Searching
{
    struct Booking b1;
    char phone_number[50];
    char seats[100];
    float total;
} s;
void search_function()
{
    bool check = false;
    FILE *f;
    int day, month, year;
    // input date to search
    do
    {
        printf("Please, Enter date (DD/MM/YYYY): ");
        scanf("%d/%d/%d", &day, &month, &year);
        if (!valid_date(day, month, year))
        {
            printf("Invalid date. Please enter a valid date.\n");
        }
    } while (!valid_date(day, month, year));
    
    // open file infor_passenger
    f = fopen("infor_passenger.txt", "r");
    if (f == NULL)
    {
        printf("Your booking have not found!\n");
        exit(8);
    }

    // read record from file
    while (fscanf(f, "%d, %d, %d, %d, %49[^,], %49[^,], %49[^,], %99[^,], %49[^,], %49[^,], %49[^,], %f, %f\n", &s.b1.date_day, &s.b1.date_month, &s.b1.date_year, &s.b1.id, s.b1.name, s.phone_number, s.b1.type_of_bus, s.b1.time, s.b1.source, s.b1.destination, s.seats, &s.b1.price, &s.total) != -1)
    {
        // compare phone number to record from file
        if (strcmp(l.phone_number, s.phone_number) == 0)
        {
            // compare date to record from file
            if (day == s.b1.date_day && month == s.b1.date_month && year == s.b1.date_year)
            {
                printf("====================>>Receipt<<====================\n");
                printf("Invoice: #%d\n", s.b1.id);
                printf("Name:  %s\n", s.b1.name);
                printf("Phone: %s\n", s.phone_number);
                printf("---------------------------------------------------\n");
                printf("Date Travel: %d/%d/%d\n", s.b1.date_day, s.b1.date_month, s.b1.date_year);
                printf("Type of bus: %s\n", s.b1.type_of_bus);
                printf("Time:        %s\n", s.b1.time);
                printf("Direction:   %s -> %s\n", s.b1.source, s.b1.destination);
                printf("Seat(s):     %s\n", s.seats);
                printf("Price:       %.2f\n", s.b1.price);
                printf("Total:       %.2f\n", s.total);
                printf("===================================================\n");
                printf("___________________________________________________\n");
                check = true;
            }
        }
    }
    fclose(f);

    if (check == false)
    {
        printf("\033[0;31m\"You have not booking yet.\"\033[0m\n");
    }
    else
    {
        printf("\033[0;32m\"Search your booking successfully.\"\033[0m\n");
    }
}