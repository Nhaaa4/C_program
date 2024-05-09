#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    // Exercise 1 using while loop to counts positive integers until negative integer
    printf("Exercise 1 : Counts the positive integers until a negative integers is entered.\n");
        int a = 1, number_1;
        while(a > 0)
        {
            printf("Please, Input your number : ");
            scanf("%d", &number_1);
            if (number_1 < 0) {
                break;
            }
            a++;
        }
        printf("You have entered %d positive integer(s)\n\n", a - 1);
    // Exercise 2 using while loop to reverse the digits of the number
    printf("Exercise 2 : Reverse the digits of the number.\n");
        int number_2;
        int reverse_2 = 0, digit_2;
        printf("Input the number : ");
        scanf("%d", &number_2);
        int b = number_2;
        while(b > 0)
        {
            digit_2 = b % 10;
            reverse_2 = reverse_2 * 10 + digit_2;
            b /= 10;
        }
        printf("After reverse number of %d => %d\n\n", number_2, reverse_2);
    // Exercise 3 using do while loop to print number 1-10
    printf("Exercise 3 : Print numbers from 1 to 10.\n");
        int number_3 = 1;
        do{
            printf("%d\t",number_3);
            number_3 ++;
        }while(number_3 <= 10);
        printf("\n\n");
    // Exercise 4 using for loop to print the frist 10 terms of fibonacci
    printf("Exercise 4 : Print the first 10 terms of the Fibonacci series.\n");
        int d;
        int first_number = 0, second_number = 1;
        printf("The first 10 terms of the Fibonacci series is : \n");
        printf("%d\t%d\t", first_number, second_number);
        int next_number = first_number + second_number;
        for (d = 3; d <= 10; d++)
        {
            printf("%d\t", next_number);
            first_number = second_number;
            second_number = next_number;
            next_number = first_number + second_number; 
        }
        printf("\n\n");
    //Exercise 5 using for loop to sum of digits of a positive integer
    printf("Exercise 5 : Print the sum of digits of a positive integer.\n");
        int e1, e2;
        int number_5, digit_of_number, sum_5 = 0;
        int digit_5, reverse_5 = 0;
        printf("Input the positive number : ");
        scanf("%d", &number_5);
        printf("The sum of the digits of number %d is ", number_5);
        for (e1 = number_5; e1 > 0; e1 /= 10) // loop for reverse digit Ex: 1234 => 4321
        {
            digit_5 = e1 % 10;
            reverse_5 = reverse_5 * 10 + digit_5;
        }
        for (e2 = reverse_5; e2 > 0; e2 /= 10) // loop for sum of digit Ex: 4321 => 1+2+3+4=10 
        {
            digit_of_number = e2 % 10;
            printf("%d + ", digit_of_number);
            sum_5 = sum_5 + digit_of_number;
        }
        printf("\b\b= %d\n\n", sum_5);
    // Exercise 6 using loop to find factorial
    printf("Exercise 6 : Find the factorial value of n.\n");
        int f;
        int n_number;
        int multi = 1;
        printf("Input N number : ");
        scanf("%d", &n_number);
        printf("The factorial of %d! is  ", n_number);
        for (f = n_number; f > 0; f--)
        {
            printf("%d * ", f);
            multi = multi * f;
        }
        printf("\b\b= %d\n\n", multi);
    // Exercise 7 : using loop to convert decimal number to binary number
    printf("Exercise 7 : Convert Decimal number to Binary number.\n");
        int g, base = 1, digit_binary;
        int decimal_number;
        int binary_number = 0;
        printf("Input the decimal number : ");
        scanf("%d", &decimal_number);
        for (g = decimal_number; g > 0; g /= 2)
        {
            digit_binary = g % 2;
            binary_number = binary_number + ( digit_binary * base);
            base = base * 10;
        }            
        printf ("The binary number is %d\n\n", binary_number);
    // Exercisse 8 : using loop to check prime number or not
    printf ("Exercise 8 : Check whether an input is a prime number or not.\n");
        int h, check_prime = 1;
        int number_8;
        printf ("Input the number : ");
        scanf ("%d", &number_8);
        if ( number_8 == 1 ) {
            printf("%d is not a prime number.\n\n", number_8);
        }else {
            for ( h = 2; h < number_8; h++ )
            {
                if ( number_8 % h == 0 ) {
                    check_prime = 0;
                }
            }
            if ( check_prime == 1) {
                printf ("%d is a prime number.\n\n", number_8);
            }else {
                printf ("%d is not a prime number.\n\n", number_8);
            }
        }
    // Exercise 9 : Using break and continue
    printf("Exercise 9 : Input numbers one by one until input 0.\n");
        int i = 1, number_9;
        while (i > 0) {
            printf("Input the number : ");
            scanf("%d", &number_9);
            if ( number_9 == 0) {
                printf("Input is ended.\n\n");
                break;
            }
            else if ( number_9 < 0 ) {
                continue;
            }
            else {
                printf("The number is %d\n", number_9);
            }
            i++;
        }
    // Exercise 10 : using loop to print pattern
    printf("Exercise 10 : Print the pattern.\n");
        int row, star, space, num_of_row;
        printf("Input the number of rows : ");
        scanf("%d", &num_of_row);
        /* Example Pattern 3:
        *
        **
        ***
        ****
        *****
        */
        printf("Pattern 1 : \n");
        for ( row = 1; row <= num_of_row; row++ )
        {
            for ( star = 1; star <= row; star++ ) 
            {
                printf("* ");
            }
            printf("\n");
        }
        /* Example Pattern 2:
        *****
        ****
        ***
        **
        *
        */
        printf("\nPattern 2 : \n");
        for ( row = 1; row <= num_of_row; row++)
        {
            for ( star = 1; star <= num_of_row - row + 1 ; star++ )
            {
                printf("* ");
            }
            printf("\n");
        }
        /* Example Pattern 3:
            *
           **
          ***
         ****
        *****
        */
        printf("\nPattern 3 : \n");
        for ( row = 1; row <= num_of_row; row++ )
        {
            for ( space = 1; space <= num_of_row - row; space++ )
            {
                printf("  ");
            }
            for ( star = 1; star <= row; star++ )
            {
                printf("* ");
            }
            printf("\n");
        }
        /* Example pattern 4:
            *
           ***
          *****
         ******* 
        */
        printf("\nPattern 4 : \n");
        for ( row = 1; row <= num_of_row; row++)
        {
            for ( space = 1; space <= num_of_row - row; space++)
            {
                printf(" ");
            }
            for ( star = 1; star <= 2*row-1; star++ )
            {
                printf("*");
            }
            printf("\n");
        }
        /* Example Pattern 5 :
           55555
            4444
             333
              22
               1
        */
        printf("\nPattern 5 : \n");
        for ( row = num_of_row; row >= 1; row-- )
        {
            for ( space = 1; space <= num_of_row - row; space++)
            {
                printf("  ");
            }
            for ( star = 1; star <= row; star++)
            {
                printf("%d ", row);
            }
            printf("\n");
        }
        printf("\n\n");
    // Bonus Guessing Game
    printf("(Bonus) : Number Guessing Game.\n");
        int secret_number;
        int r, number_guess;
        printf("Welcome to the Number Guessing Game!\n");

        srand( (unsigned) time (NULL) ); // use srand() to ensure diffirent sequences of random numbers each time the  program runs.
        secret_number = rand() % 101; // use rand() to generate random number.

        for( r = 1; r <= 10; r++) // the player can guess only 10 times.
        {
            printf("Guess the secret number (between 1 and 100) : ");
            scanf("%d", &number_guess);
            if(number_guess > secret_number) {  
                printf("Too high! Try again.\n");
            }else if(number_guess < secret_number) {
                printf("Too low! Try again.\n");
            }else{
                printf("Congratulation! You've guessed the secret number!\n");
                break;
            }
        }
        if(number_guess != secret_number) { 
            printf("Sorry, You've run out of attempts. The secret number was %d", secret_number);
        }
    return 0;
}