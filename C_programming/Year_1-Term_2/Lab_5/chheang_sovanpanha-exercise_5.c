#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <math.h>
#include <stdbool.h>
int factorial(int n);
int summation(int n);
float square_root(int n);
int prime_number(int n);
int main()
{
    int option;
    int num;
    int result;
    float result_sqrt;
    bool check;
    do
    {
        // this loop will work until user input the number from 1 to 5
        do
        {
            system("cls");
            printf("===========>> Option <<===========\n");
            printf("1). Compute factorial\n");
            printf("2). Summation from 1 to n\n");
            printf("3). Compute square root\n");
            printf("4). Check prime number\n");
            printf("5). Exit\n");
            printf("===================================\n");
            printf("choose option: ");
            scanf("%d", &option);
            if (option != 1 && option != 2 && option != 3 && option != 4 && option != 5)
            {
                printf("\nPlease, choose option from 1 to 5\n");
                sleep(2);
                system("cls");
            }
            system("cls");
        } while (option != 1 && option != 2 && option != 3 && option != 4 && option != 5);

        switch (option)
        {
        case 1:
            printf("Compute Factorial\n");
            // this loop will work until user input positive number
            do
            {
                printf("Enter value of n: ");
                scanf("%d", &num);
                if (num < 0)
                {
                    printf("Error Input.\nYou should input positive number.\n");
                    sleep(2);
                    system("cls");
                }
            } while (num < 0);

            result = factorial(num);
            printf("The result of factorial of %d is %d\n", num, result);
            break;

        case 2:
            printf("Summation\n");
            // this loop will work until user input positive number
            do
            {
                printf("Enter value of n: ");
                scanf("%d", &num);
                if (num <= 0)
                {
                    printf("Error Input.\nYou should input positive number.\n");
                    sleep(2);
                    system("cls");
                }
            } while (num < 0);
            result = summation(num);
            printf("The result of summation from 1 to %d: %d\n", num, result);
            break;

        case 3:
            printf("Square root\n");
            // this loop will work until user input positive number
            do
            {
                printf("Enter value of n: ");
                scanf("%d", &num);
                if (num <= 0)
                {
                    printf("Error Input.\nYou should input positive number.\n");
                    sleep(2);
                    system("cls");
                }
            } while (num < 0);
            result_sqrt = square_root(num);
            printf("The result of square root of %d is %.2f\n", num, result_sqrt);
            break;

        case 4:
            printf("Check prime number\n");
            // this loop will work until user input positive number
            do
            {
                printf("Enter value of n: ");
                scanf("%d", &num);
                if (num <= 0)
                {
                    printf("Error Input.\nYou should input positive number.\n");
                    sleep(2);
                    system("cls");
                }
            } while (num < 0);
            check = prime_number(num);
            if (check == 1)
            {
                printf("%d is a prime number.\n", num);
            }
            else
            {
                printf("%d is not a prime number.\n", num);
            }
            break;

        case 5:
            exit(8);
            break;

        default:
            printf("Invalid option\n");
            break;
        }
        printf("Please, Press \"Enter\" to continue.\n");
    } while (getch() == 13);
    return 0;
}
int factorial(int n)
{
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
int summation(int n)
{
    if (n > 0)
    {
        return n + summation(n - 1);
    }
    else
    {
        return 0;
    }
}
float square_root(int n)
{
    return sqrt(n);
}
int prime_number(int n)
{
    int i;
    // initialize check = 1 is prime number
    bool check = 1;
    // if n = 1 then it is not prime 
    if (n == 1)
    {
        check = 0;
    }
    // if n = 2 then it is prime
    else if (n == 2)
    {
        check = 1;
    }
    // divide from 2 until n-1 if remain is not equal to zero then n is prime
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                check = 0;
                break;
            }
        }
    }
    if (check == 1)
        return 1;
    else
        return 0;
}