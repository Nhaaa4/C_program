// Cancel function by Kong measchamrong
#include <stdio.h>
#include "search_function.c"
struct Cancel
{
    struct Searching s1;
} c;
void cancel_function()
{
    bool check = false;
    int day, month, year;
    FILE *f, *temp;
    f = fopen("infor_passenger.txt", "r");
    temp = fopen("temp.txt", "w");

    if (f == NULL)
    {
        printf("Your booking have not found!\n");
        exit(8);
    }

    do
    {
        printf("Please, Enter date (DD/MM/YYYY): ");
        scanf("%d/%d/%d", &day, &month, &year);
        if (!valid_date(day, month, year))
        {
            printf("Invalid date. Please enter a valid date.\n");
        }
    } while (!valid_date(day, month, year));
    
    while (fscanf(f, "%d, %d, %d, %d, %49[^,], %49[^,], %49[^,], %99[^,], %49[^,], %49[^,], %49[^,], %f, %f\n", &c.s1.b1.date_day, &c.s1.b1.date_month, &c.s1.b1.date_year, &c.s1.b1.id, c.s1.b1.name, c.s1.phone_number, c.s1.b1.type_of_bus, c.s1.b1.time, c.s1.b1.source, c.s1.b1.destination, c.s1.seats, &c.s1.b1.price, &c.s1.total) != -1)
    {
        if (strcmp(l.phone_number, c.s1.phone_number) == 0)
        {
            if (day == c.s1.b1.date_day && month == c.s1.b1.date_month && year == c.s1.b1.date_year)
            {
                printf("====================>>Receipt<<====================\n");
                printf("Invoice: #%d\n", c.s1.b1.id);
                printf("Name:  %s\n", c.s1.b1.name);
                printf("Phone: %s\n", c.s1.phone_number);
                printf("---------------------------------------------------\n");
                printf("Date Travel: %d/%d/%d\n", c.s1.b1.date_day, c.s1.b1.date_month, c.s1.b1.date_year);
                printf("Type of bus: %s\n", c.s1.b1.type_of_bus);
                printf("Time:        %s\n", c.s1.b1.time);
                printf("Direction:   %s -> %s\n", c.s1.b1.source, c.s1.b1.destination);
                printf("Seat(s):     %s\n", c.s1.seats);
                printf("Price:       %.2f\n", c.s1.b1.price);
                printf("Total:       %.2f\n", c.s1.total);
                printf("===================================================\n");
                printf("___________________________________________________\n");
                check = true;
                continue;
            }
        }
        fprintf(temp, "%d, %d, %d, ", c.s1.b1.date_day, c.s1.b1.date_month, c.s1.b1.date_year);
        fprintf(temp, "%d, ", c.s1.b1.id);
        fprintf(temp, "%s, ", c.s1.b1.name);
        fprintf(temp, "%s, ", c.s1.phone_number);
        fprintf(temp, "%s, ", c.s1.b1.type_of_bus);
        fprintf(temp, "%s, ", c.s1.b1.time);
        fprintf(temp, "%s, %s, ", c.s1.b1.source, c.s1.b1.destination);
        fprintf(temp, "%s, ", c.s1.seats);
        fprintf(temp, "%.2f, ", c.s1.b1.price);
        fprintf(temp, "%.2f\n", c.s1.total);
    }
    fclose(f);
    fclose(temp);
    remove("infor_passenger.txt");
    rename("temp.txt", "infor_passenger.txt");

    if (check == false)
    {
        printf("\033[0;31m\"You have not booking yet\"\033[0m\n");
    }
    else
    {
        printf("\033[0;32m\"Cancel this Booking Successful\"\033[0m\n\n");
    }
}