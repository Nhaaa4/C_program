#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void display_app_screen () {
    system ("color 4");
    printf ("\t======================================\n");
    printf ("\t||       Welcome to CADT app!       ||\n");
    printf ("\t======================================\n\n\n");
    printf ("\e[m");
}
void display_cinema_screen () {
    system ("cls");
    system ("color 4");
    printf ("\t======================================\n");
    printf ("\t||    Welcome to CADT cinema app!   ||\n");
    printf ("\t======================================\n\n\n");
    printf ("\e[m");
}
void display_shop_screen () {
    system ("cls");
    system ("color 4");
    printf ("\t======================================\n");
    printf ("\t||    Welcome to CADT shop app!     ||\n");
    printf ("\t======================================\n\n\n");
    printf ("\e[m");
}
void seat_receipt (float price, char name_moive[50]) {
    float total;
    int i, j, k, p, number_of_people;
    char select_seat[5][25];
    char seat[5][5][5] = {
                             {"E1", "E2", "E3", "E4", "E5"},
                             {"D1", "D2", "D3", "D4", "D5"},
                             {"C1", "C2", "C3", "C4", "C5"},
                             {"B1", "B2", "B3", "B4", "B5"},
                             {"A1", "A2", "A3", "A4", "A5"},
                         };
    printf("Please, Enter the number of people : ");
    scanf("%d", &number_of_people);
    printf ("Seat avalivlble : \n");
    printf ("_____________________________________\n");
    printf ("|                                   |\n");
    printf ("|              SCREEN               |\n");
    printf ("|___________________________________|\n\n");
    printf ("\n");
    for ( i = 0; i < 5; i++ ) {
        for ( j = 0; j < 5; j++) {
            printf ("[%s]\t", seat[i][j]);
        }
        printf ("\n");
    }
    back:
    printf ("Please, Choose seat separated by space : ");
    for ( p = 0; p < number_of_people; p++) {
        scanf("%s", &select_seat[p]);
    }
    for (p = 0; p < number_of_people; p++) {
        bool seat_found = 0;
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (strcmp(seat[i][j], select_seat[p]) == 0) {
                    seat_found = 1;
                }
            }
        }
        if (seat_found == 0) {
            printf("Seat %s is invalid. Please choose seat again.\n", select_seat[p]);
            goto back;
        }
    }

    for ( p = 0; p < number_of_people; p++ ) {
        for ( i = 0; i < 5; i++ ) {
            for ( j = 0; j < 5; j++) {
                if( strcmp (select_seat[p], seat[i][j]) == 0 ) {
                    strcpy ( seat[i][j], "##");
                } 
            }
        }
    }
    printf ("Seat which you've chosen : \n");
    printf ("**Note : (##) The Seat which you've chosen.\n");
    for ( i = 0; i < 5; i++ ) {
        for ( j = 0; j < 5; j++) {
            printf ("[%s]\t", seat[i][j]);
        }
        printf ("\n");
    }
    total = price * number_of_people;
    printf ("\nReceipt : \n");
    printf ("Movie's name : %s\n", name_moive);  
    printf ("Price : %.2f\n", price);
    printf ("Number of People : %d\n", number_of_people);
    printf ("Seat : ");
    for (i = 0; i < number_of_people; i++) {
        printf ("%5s ", select_seat[i]);
    }
    printf ("\nTotal : %.2f\n", total);
    printf ("Thank you for using our service. Please, Enjoy your day.\n");
}
int main () {
    char name_movie[50], name_snack[50];
    int option, type_of_movie, type_of_snack, quantity;
    float price_moive = 4.5, price_snack, total;
    do {
        system ("cls");
        display_app_screen ();
        printf ("1. CADT Cinema\n");
        printf ("2. CADT Shop\n");
        printf ("=>Please, choose the option : ");
        scanf ("%d", &option);
        system ("cls");
        switch (option) {
            case 1: 
            display_cinema_screen ();
            printf ("You're finding a movie, aren't you?\n");
            printf ("Please, Booking moive now.\n");
            printf ("Here, have movies :\n");
            printf ("\t1. Exhuma ($4.5)\n");
            printf ("\t2. Kung Fu Panda 4 ($4.5)\n");
            printf ("\t3. Jonh Wick: Chapter 4 ($4.5)\n");
            back1:
            printf ("=> Please, Choose the number of moive's name : ");
            scanf ("%d", &type_of_movie);

            switch (type_of_movie) {
                case 1:
                strcpy (name_movie, "Exhuma");
                printf ("You've choose Exhuma.\n");
                seat_receipt (price_moive, name_movie);
                break;

                case 2:
                strcpy (name_movie, "Kung Fu Panda 4");
                printf ("You've choose Kung Fu Panda 4.\n");
                seat_receipt (price_moive, name_movie);
                break;

                case 3:
                strcpy (name_movie, "Jonh Wick: Chapter 4");
                printf ("You've choose Jonh Wick: Chapter 4.\n");
                seat_receipt (price_moive, name_movie);
                break;      

                default :
                printf ("Invalid Selection. Please try again.\n");
                goto back1;
            }
            break;

            case 2: 
            display_shop_screen ();
            printf ("Welcome to CADT shop!\n");
            printf ("List of snack & drink:\n");
            printf ("\t1. Coke ($1.5)\n");
            printf ("\t2. Popcorn ($2)\n");
            printf ("\t3. Single set (Coke & Popcorn) ($3)\n");
            printf ("\t4. Couple set (2 cokes & 2 popcorn) ($5.5))\n");
            printf ("**Note: If you are single, you should order single set:(\n");
            back2:
            printf ("=> Please, Choose the number of snack & drink : ");
            scanf ("%d", &type_of_snack);

            switch (type_of_snack) {
                case 1:
                strcpy (name_snack, "Coke");
                price_snack = 1.5;
                printf ("You've choose Coke.\n");
                break;

                case 2:
                strcpy (name_snack, "Popcorn");
                price_snack = 2;
                printf ("You've choose Popcorn.\n");
                break;

                case 3:
                strcpy (name_snack, "Single set");
                price_snack = 3;
                printf ("You've choose Single set.\n");
                break;

                case 4:
                strcpy (name_snack, "Couple set");
                price_snack = 5.5;
                printf ("You've choose Couple set.\n");
                break;

                default :
                printf ("Invalid Selection. Please try again.\n");
                goto back2;
            }
            back3 :
            printf ("Please, Enter the desired quantity : ");
            scanf ("%d", &quantity);
            while (quantity <= 0) {
                printf ("Invalid quantity. Please, Enter a positive quantity.\n");
                goto back3;
            }
            total = price_snack * quantity;
            printf ("Receipt: \n");
            printf ("You've choose : %s\n", name_snack);
            printf ("Price : %.2f\n", price_snack);
            printf ("Quantity : %d\n", quantity);
            printf ("Total Price : %.2f\n", total);
            printf ("Thank you for your purchase, please enjoy your day!\n");
            break;
        }
    printf ("\nIf you want to exit, Please press the botton ESC.\n");
    printf ("If you want to continue, Please press the botton Enter.\n");
    } while (getch() == 13);
    return 0;
}