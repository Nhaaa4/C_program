#include <stdio.h>
#include <string.h>
int main () {
    /* Exercise 0 Display your group number and your team members. (You can add more information like 
       school, gen, etc.). Make your own design and creativity! (by all)*/
    printf ("Exercise 0 : Display your group number and your team members.\n");
    printf ("Welcome to Group 4!!:)\n");
    printf ("Meet our Team : \n\n");
    // Team Member 1
    printf ("1. Name : Chheng Bunheang\n");
    printf ("   Gender : Male\n");
    printf ("   School : Cambodia Academy of Digital Technology\n");
    printf ("   Generation : 10\n\n");
    // Team Member 2
    printf ("2. Chheang Sovanpanha\n");
    printf ("   Gender : Male\n");
    printf ("   School : Cambodia Academy of Digital Technology\n");
    printf ("   Generation : 10\n\n");
    // Team Menmber 3
    printf ("3. Hout Vireakcheert\n");
    printf ("   Gender : Male\n");
    printf ("   School : Cambodia Academy of Digital Technology\n");
    printf ("   Generation : 10\n\n");
    // Team Member 4
    printf ("4. Kosal Sophanith\n");
    printf ("   Gender : Male\n");
    printf ("   School : Cambodia Academy of Digital Technology\n");
    printf ("   Generation : 10\n\n");

    /* Exercise 1 Write a C program that takes a character as input and determines whether it is a lowercase 
       alphabet using if-else statement. (by Panha)*/
    printf ("Exercise 1 : Write a C program that takes a character as input and determines whether it is lowercase alphabet.\n");
    char character1;
    printf ("Enter a character : ");
    scanf ("%c", &character1);
    if (character1 >= 97 && character1 <= 122 ) { // using ascii to compare, a = 97 until z = 122
        printf ("It's a lowercase alphabet.\n\n");
    } else {
        printf ("It's not a lowercase alphabet.\n\n");
    }

    /* Exercise 2 Create a C program that takes two characters as input and determines which one comes 
       first in alphabetical order using ternary operator.(by Heang)*/
    printf ("Exercise 2 : Write a C program that takes characters as input and determines which one comes first in alphabetical.\n");
    char alphabet_1, alphabet_2;
    printf ("Enter two characters separate by space : ");
    scanf ("  %c %c", &alphabet_1, &alphabet_2);// space in scanf to avoid buffer code
    ( alphabet_1 < alphabet_2 ) ? printf ("The character which comes first is %c.\n\n", alphabet_1) : printf ("The character which comes first is %c.\n\n", alphabet_2);
    
    /* Exercise 3 Write a C program that prompts the user to input the scores of five subjects, calculates the 
       total marks obtained, determines whether the student passed or failed (passing marks >= 50) 
       using if-else statement. (by Cheert)*/ 
    printf ("Exercise 3 : Write a C program to prompt the user for five subject scores, calculate the total, and determine if the student passed (passing marks >= 50) using if-else.\n");
    float subject_1, subject_2, subject_3, subject_4, subject_5;
    // input the score of five subjects
    printf ("Enter the scores of first subject : ");
    scanf ("%f", &subject_1);
    printf ("Enter the scores of second subject : ");
    scanf ("%f", &subject_2);
    printf ("Enter the scores of third subject : ");
    scanf ("%f", &subject_3);
    printf ("Enter the scores of fourth subject : ");
    scanf ("%f", &subject_4);
    printf ("Enter the scores of fifth subject : ");
    scanf ("%f", &subject_5);
    // calculate the average of the scores
    float average = (subject_1 + subject_2 + subject_3 + subject_4 + subject_5) / 5;
    printf ("Your average of the scores is %.2f\n", average);
    if ( average >= 50 ) { // if the average is greater than or equal to 50, the student passed the exam
        printf ("You passed the exam.\n\n");
    } else { // if the average is less than 50, the student failed the exam
        printf ("You failed the exam.\n\n");
    }

    /* Exercise 4 Write a C program that prompts the user to choose their favorite holiday event from a list 
       and displays information about the selected event. (by Heang)*/
    printf ("Exercise 4 : Write a C program that prompts the user to choose their favorite holiday event and displays information about the selected event.\n");
    int number_of_event;
    printf ("Choose your favorite holiday event : \n"); // print list of holiday events
    printf ("\t1.  International New Year Day\n"); 
    printf ("\t2.  Day of Victory over the Genocidal Regime\n");
    printf ("\t3.  International Women's Rights Day\n");
    printf ("\t4.  Khmer New Year's Day\n");
    printf ("\t5.  International Labor Day\n");
    printf ("\t6.  Birthday of His Majesty Preah Bat Samdech Preah Boromneath NORODOM SIHAMONI, King of Cambodia\n");
    printf ("\t7.  Visaka Bochea Day\n");
    printf ("\t8.  Royal Ploughing Ceremony\n");
    printf ("\t9.  Birthday of Her Majesty the Queen-Mother NORODOM MONINEATH SIHANOUK of Cambodia\n");
    printf ("\t10. Constitution Day\n");
    printf ("\t11. Pchum Ben Day\n");
    printf ("\t12. Mourning Day of the Late King-Father NORODOM SIHANOUK of Cambodia\n");
    printf ("\t13. Coronation Day of His Majesty Preah Bat Samdech Preah Boromneath NORODOM SIHAMONI, King of Cambodia\n");
    printf ("\t14. National Independence Day\n");
    printf ("\t15. Water Festival\n");
    printf ("=> Please, Enter the number of your favorite holiday event : ");
    scanf ("%d", &number_of_event);

    switch (number_of_event) { // print information about the selected event
        case 1:
        printf ("Your favorite holiday event is International New Year Day, which falls on 01 Jan.\n\n");
        break; 
         
        case 2:
        printf ("Your favorite holiday event is Day of Victory over the Genocidal Regime, which falls on 07 Jan.\n\n");
        break;

        case 3:
        printf ("Your favorite holiday event is International Women's Rights Day, which falls on 08 Mar.\n\n");
        break;

        case 4:
        printf ("Your favorite holiday event is Khmer New Year's Day, which falls on 13-14-15-16 Apr.\n\n");
        break;
        
        case 5:
        printf ("Your favorite holiday event is International Labor Day, which falls on 01 May.\n\n");
        break;
        
        case 6:
        printf ("Your favorite holiday event is Birthday of His Majesty Preah Bat Samdech Preah Boromneath NORODOM SIHAMONI, King of Cambodia, which falls on 14 May.\n\n");
        break;
        
        case 7:
        printf ("Your favorite holiday event is Visaka Bochea Day, which falls on 22 May.\n\n");
        break;
        
        case 8:
        printf ("Your favorite holiday event is Royal Ploughing Ceremony, which falls on 26 May.\n\n");
        break;
        
        case 9:
        printf ("Your favorite holiday event is Birthday of Her Majesty the Queen-Mother NORODOM MONINEATH SIHANOUK of Cambodia, which falls on 18 Jun.\n\n");
        break;
        
        case 10:
        printf ("Your favorite holiday event is Constitution Day, which falls on 24 Sep.\n\n");
        break;
        
        case 11:
        printf ("Your favorite holiday event is Pchum Ben Day, which falls on 01-02-03 Oct.\n\n");
        break;
        
        case 12:
        printf ("Your favorite holiday event is Mourning Day of the Late King-Father NORODOM SIHANOUK of Cambodia, which falls on 15 Oct.\n\n");
        break;
        
        case 13:
        printf ("Your favorite holiday event is Coronation Day of His Majesty Preah Bat Samdech Preah Boromneath NORODOM SIHAMONI, King of Cambodia, which falls on 29 Oct.\n\n");
        break;
        
        case 14:
        printf ("Your favorite holiday event is National Independence Day, which falls on 09 Nov.\n\n");
        break;
        
        case 15:
        printf ("Your favorite holiday event is Water Festival, which falls on 14-15-16 Nov.\n\n");
        break;

        default : 
        printf ("You should enter number between 1 to 15.\n\n");
    }

    // Exercise 5 Write a program using a for loop to count down from 10 to 1 and print each number. (by Heang)
    printf ("Exercise 5 : Write a program using a for loop to count down from 10 to 1 and print each number.\n");
    int i;
    for ( i = 10; i > 0; i--) { // count down from 10 to 1
        printf ("%d\t", i); // print each number
    }
    printf ("\n\n"); 

    /* Exercise 6 Write a program using a do-while loop to repeatedly prompt the user for a password 
       (integers only; e.g., 1234) until the correct password is entered. (by Panha)*/
    printf ("Exercise 6 : Write a program to repeatedly prompt the user for a password until the correct password is entered.\n");
    int passwords;
    do {
        printf ("Please, Enter you password : ");
        scanf ("%d", &passwords);
        if (passwords == 1234) { // check the password
            printf ("Your password is correct...!\n\n");
        } else {
            printf ("Please try again, Your password is not correct...!\n");
        }
    } while (passwords != 1234); // excute until the correct password is entered

    /* Exercise 7 Write a C program that uses goto to determine if a user-entered character is a vowel (a, e, 
       i, o, u) and prints "Vowel" if it is, otherwise prints "Consonant". (by Nith)*/
    printf ("Exercise 7 : Write a C program that determine if a user-entered character is a vowel or consonant.\n");
    char character2;
    printf ("Enter a character : ");
    scanf (" %c", &character2);

    switch ( character2 ) { // check the character
        case 'a' :
        case 'A' :
        case 'e' :
        case 'E' :
        case 'i' :
        case 'I' :
        case 'o' :
        case 'O' :
        case 'u' :
        case 'U' :
        goto vowel; // if the character is vowel, go to the vowel label

        default :
        goto consonant; // if the character is consonant, go to the consonant label
    }
    vowel : 
    printf ("It's a Vowel.\n\n");
    goto next; // use to not print the consonant and go to the next exercise
    consonant :
    printf ("It's a Consonant.\n\n");
    next :

    /* Exercise 8 Write a C program that uses a while loop to iterate through numbers in a range, skipping 
    even numbers with continue and printing only the odd numbers. (by Cheert)*/
    printf ("Exercise 8 : Write a C program that skipping even numbers and printing only the odd numbers.\n");
    int start_number, end_number;
    printf ("Enter the start of the number : "); // input start number
    scanf ("%d", &start_number);
    printf ("Enter the end of the number : "); // input end number
    scanf ("%d", &end_number);
    while ( start_number <= end_number ) { 
        if ( start_number % 2 == 0 ) { // skip the even number
            start_number++;
            continue;
        } else { // print the odd number
        printf ("%d\t", start_number);
        start_number++;
        }
    }
    printf ("\n\n");

    /* Exercise 9 Write a C program using any type of loop that repeatedly prompts the user for positive 
       integers (greater than 0) until a non-positive number is entered, and then prints the total 
       count of positive numbers entered. (by Nith)*/
    printf ("Exercise 9 : Write a C program that repeatedly prompts the user for positive integers and counts them until a non-positive number is entered.\n");
    int j, number;
    for ( j = 1; j > 0; j++) { // loop for count the positive number
        printf ("Enter the number : ");
        scanf ("%d", &number);
        if ( number >= 0 ) { // if the number is positive, still continue the loop
            continue;
        } 
        break; // if the number is negative, break the loop
    }
    printf ("The total of positiver numbers entered is %d.\n\n", j - 1); // print the total of positive number

    /* Exercise 10 Write a C program that prompts the user to enter the number of rows for a pattern. The 
       program should then print the following pattern based on the user's input: (by All)*/
    printf ("Write a C program that prompts the user to enter the number of rows for a pattern.\n");
    int number_of_row, row, space, output; // output = column
    printf ("Enter the number of row(s) : ");
    scanf ("%d", &number_of_row);
    printf ("\n");
    /* Pattern 1
       5
       44
       333
       2222
       11111*/ 
    printf ("Pattern 1 : \n");
    for (row = number_of_row; row >= 1; row--) { // loop for print row
        for (output = 1; output <= number_of_row - row + 1; output++) {  // loop for print column and print number
            printf ("%d", row);
        }
        printf ("\n");
    }
    printf ("\n");

    /* Pattern 2
       *********
        *******
         *****
          ***
           * */
    printf ("Pattern 2 : \n");
    for (row = number_of_row; row >= 1; row--) { // loop for print row
        for (space = 1; space <= number_of_row - row; space++) { // loop for print space
            printf (" ");
        }
        for (output = 1; output <= 2 * row - 1; output++) { // loop for print star
            printf ("*");
        }
        printf ("\n");
    }
    printf ("\n");

    /*Pattern 3 
      1***1
      *****
      3***3
      *****
      5***% */
    printf ("Pattern 3 : \n");
    for (row = 1; row <= number_of_row; row++) { // loop for print row
        if (row % 2 != 0) { // if row is odd
            for (output = 1; output <= number_of_row; output++) { // loop for print 1***1,3***3,5***5,..., when it's odd ow
                if (output == 1 || output == number_of_row) { // print only 1st and last column
                    printf ("%d", row);
                } else { // print only middle column
                    printf ("*");
                }
            }
        } else { // if row is even
            for (output = 1; output <= number_of_row; output++) { // loop for print ***** when it's even row
                printf ("*");
            }
        }
        printf ("\n"); 
    }
    printf ("\n");

    /* Pattern 4
       ******
       *    *
       *    *
       *    *
       ******   */
    printf ("Pattern 4 : \n");
    for (row = 1; row <= number_of_row; row++) { // loop for print row
        for (output = 1; output <= number_of_row + 1; output++) { // loop for print column
            // check if first row or last row or first column or last column, print "*"
            if (row == 1 || row == number_of_row || output == 1 || output == number_of_row + 1) {
                printf ("*");
            } else { // if not first row or last row or first column or last column, print space " "
                printf (" ");
            }
        }
        printf ("\n");
    }
    printf ("\n");
    /* Pattern 5
           * 
          *** 
         ***** 
        ******* 
       ********* 
        ******* 
         ***** 
          *** 
           * */
    printf ("Pattern 5 : \n");
    for (row = 1; row <= number_of_row; row++) { // loop for print row, fist row to middle row
        for (space = 1; space <= number_of_row - row; space++) { // loop for print space
            printf (" ");
        }
        for (output = 1; output <= 2 * row - 1; output++) { // loop for print output
            printf ("*");
        }
        printf("\n");
    }
    for (row = number_of_row - 1; row >=  1; row--) { // loop for print row, middle row to last row
        for (space = 1; space <= number_of_row - row; space++) { // loop for print space
            printf (" ");
        }
        for (output = 1; output <= 2 * row - 1; output++) { // loop for print output
            printf ("*");
        }
        printf("\n");
    }
    printf ("\n\n");

    // Bonus : You're building a simple program for a small online fruit store. But with a twist - the password to access the store is a secret number! (By All) 
    printf ("(Bonus) : A simple program for a small fruit store.\n");
    int attempt = 3, password, menu, quantity;
    char fruit[20];
    float price, total;
    printf ("--------------Welcome to online fruit store!--------------\n");
    // welcome and login 
    printf ("=> Please enter the password : "); // inter the password
    scanf ("%d", &password);
    while ( attempt > 0 && password != 1234) { // loop for limit number of attempt
        printf("Incorrect password. You have %d attempts left.\n", attempt);
        printf ("=> Please enter the password : ");
        scanf ("%d", &password);
        attempt--;
    }
    if ( password == 1234 ) {
        printf ("You have logged in successful.\n\n");
        // Product selection
        printf ("Welcome to the store!\n"); // print list of fruit
        printf ("List of fruit:\n");
        printf ("\t1. Apple ( $2.5 / kg )\n");
        printf ("\t2. Banana ( $1.25 / bunch )\n");
        printf ("\t3. Orange ( $2 / kg )\n");
        back :
        printf ("=> Please, choose the number of fruit : ");
        scanf ("%d", &menu);
    
        switch ( menu ) { // switch case for fruit selection and price
            case 1 : 
            strcpy (fruit, "Apple");
            price = 2.5;
            printf ("You have selected Apple.\n");
            break;

            case 2 : 
            strcpy (fruit, "Banana");
            price = 1.25;
            printf ("You have selected Banana.\n");
            break;

            case 3 : 
            strcpy (fruit, "Orange");
            price = 2;
            printf ("You have selected Orange.\n");
            break;

            default :
            printf ("Invalid Selection. Please try again.\n");
            goto back; // if user input invalid selection, it will go back to choose the menu again.
        }
        // Quantity
        back1 :
        printf ("Please, Enter the desired quantity : "); // print to desired quantity
        scanf ("%d", &quantity);
        while (quantity <= 0) {
            printf ("Invalid quantity. Please, Enter a positive quantity.\n");
            goto back1;
        }
        // Receipt
        total = price * quantity;
        // print reccipt for item, price, quantity, total price
        printf ("Receipt : %10s %10s %10s %10s\n", "Fruit", "Price", "QTY", "Total");
        printf ("          %10s %10.2f %10d %10.2f\n",fruit, price, quantity, total);
        printf ("Thank you for your purchase, please enjoy your day!\n");
    } else {
        printf ("You have run out of attempt. Exit...!\n"); // if user input wrong password 3 times, it will exit.
    }
    return 0;
}