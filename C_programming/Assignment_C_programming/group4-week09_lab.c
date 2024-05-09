#include <stdio.h>
#include <string.h>
int main () {
    /*  Display my group number and my team members.*/
    printf ("Display my group number and my team members.\n");
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

    /* Exercise 1 : Write a program to declare and initialize an integer array of size 5 and print its elements 
       (with values {1, 2, 3, 4, 5}).(Heang) */
    printf ("Exercise 1 : Print Element (with values {1, 2, 3, 4, 5}).\n");
    int number_1 [5] = {1, 2, 3, 4, 5};
    printf ("Print element :\n");
    for (int a = 0; a < 5; a++) {
        printf ("%-10d", number_1[a]);
    }
    printf ("\n\n");

    /*Exercise 2 : Create a program that calculates the sum of all elements (with values {1, 2, 3, 4, 5, 6, 7})  
      in an integer array of size 7(Phanith)*/
    printf ("Exercise 2 : Calculate the sum of all elements.\n\n");
    int number_2 [7] = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;
    printf ("Sum of all Elements : \n");
    for (int b = 0; b < 7; b++) {
        printf ("%d + ", number_2 [b]);
        sum += number_2 [b];
    }
    printf ("\b\b= %d\n\n", sum);

    /*Write a program to copy the contents of one integer array into another array of the same size(cheert)*/
    printf ("Exercise 3 : Copy the contents of one integer array into another array of the same size\n");
    int array_1 [ ] = {10, 9, 8, 7, 6};
    int size_3 = sizeof (array_1) / sizeof (array_1 [0]);
    int array_2 [size_3];
    printf ("Number of First array : ");
    for (int c1 = 0; c1 < size_3; c1++) {
        printf ("%-10d", array_1 [c1]);
    }
    for (int c2 = 0; c2 < size_3; c2++) {
        array_2 [c2] = array_1 [c2];
    }
    printf ("\nAfter Copy the contents of first array into second array.\n");
    printf ("Number of Second array : ");
    for (int c3 = 0; c3 < size_3; c3++) {
        printf ("%-10d", array_1 [c3]);
    }
    printf ("\n\n");

    /* Exercise 4 : Declare an array of integers and initialize it with values {5, 10, 15, 20, 25}. Find and print 
    the maximum value in the array.(panha)*/
    printf ("Exercise 4 : Find and Print the maximum value in the array.\n");
    int arr [ ] = {5, 10, 15, 20, 25};
    int size_4 = sizeof (arr) / sizeof (arr [0]);
    int max_value = arr [0];
    printf ("Elements of Array : ");
    for (int d1 = 0; d1 < size_4; d1++) {
        printf ("%-10d", arr [d1]);
    }  
    printf ("\n");
    for (int d2 = 1; d2 < size_4; d2++) {
        if ( arr [d2] > max_value) {
            max_value = arr [d2];
        }
    }
    printf ("The maximum value in the array is %d\n\n", max_value);

    /* Exercise 5 ; Declare an array of integers and initialize it with values {10, 20, 30, 40, 50}. Calculate and 
       print the average of all elements in the array.(heang)*/
    printf ("Exercise 5 : Calculate and print the average of all elements in the array.\n");
    int array [ ] = {10, 20, 30, 40, 50};
    int size_5 = sizeof (array) / sizeof (array [0]);
    float sum_ = 0, average;
    printf ("Elements of Array : \n");
    for (int e1 = 0; e1 < size_5; e1++) {
        printf ("%-10d", array[e1]);
    }
    printf ("\n");
    for (int e2 = 0; e2 < size_5; e2++) {
        sum_ += array [e2];
    }
    average = (float) sum_ / size_5;
    printf ("The average of all elements in the array is %.2f\n\n", average);
    
    /* Exercise 6 : Declare a character array to store a string "Hello, World!". Print the string.(panha)*/
    printf ("Exercise 6 : Declare a character array to store a string << Hello, World! >>. Print the string.\n");
    char string [ ] = "Hello, World!";
    printf ("Print the String : \n");
    printf ("\t%s\n\n", string);

    /* Exercise 7 : In C, print each character in the string "CADT". (phanith)*/
    printf ("Exercise 7 : Print each character in the string << CADT >>.\n");
    char character [ ] = "CADT";
    int size_7 = sizeof (character) / sizeof (character [0]);
    printf ("Print each character in the string : \n");
    for (int g = 0; g < size_7; g++) {
        printf ("\t%c", character [g]);
    }
    printf ("\n\n");

    /* Exercise 8 : In C, concatenate the strings "firstname" and "lastname" to create and print the full name. (cheert)*/
    printf ("Exercise 8 : Concatenate the strings (firstname) and (lastname) to create and print the full name.\n");
    char firstname [ ] = "John";
    char lastname [ ] = " Sey";
    char fullname[50];
    printf ("Firstname : %s\n", firstname);
    printf ("Lastname : %s\n", lastname); 
    strcpy (fullname, strcat (firstname, lastname));
    printf ("The fullname is : %s\n\n", fullname);
    
    /* Exercise 9 : Declare a string array to store names of fruits: {"Apple", "Banana", "Orange"}. Print each 
       fruit name on a new line.(heang)*/
    printf ("Exercise 9 : Print each fruit name on a new line.\n");
    char fruits [ ][50] = {"Apple", "Banana", "Orange"};
    int size_9 = sizeof (fruits) / sizeof (fruits [0]);
    printf ("Print each fruit name on a new line : \n");
    for (int i = 0; i < size_9; i++) {
        printf ("\t%d. %s\n", i + 1, fruits [i]);
    }
    printf("\n");

    /* Exercise 10 :  Create a 3x3 two-dimensional integer array named matrix and initialize it with some 
       arbitrary values. Then, write code to print the elements of the matrix in a 3x3 grid format.(all) */
    printf ("Exercise 10 : Print the elements of the matrix in a 3x3 grid format.\n");
    int matrix [3][3] = {
                            {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}
                        };
    printf ("Print the element of matrix in 3 x 3 : \n\t");
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            printf ("%d ", matrix [j][k]);
        }
        printf ("\n\t");
    }
    return 0;
}