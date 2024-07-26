#include <stdio.h>
int main () {
    int i;
    int size_arr1, size_arr2;
    // ask user to input size of array 1
    printf ("Enter size of array 1: ");
    scanf ("%d", &size_arr1);
    // ask user to input size of array 2
    printf ("Enter size of array 2: ");
    scanf ("%d", &size_arr2);
    // check: if size of array 1 is not equal to size of array 2, then It can not calculate.
    if (size_arr1 != size_arr2) {
        printf ("Size of array 1 is not equal to size of array 2.\n");
        printf ("So, It can not calculate.\n");
    } 
    // Size of array start from 1
    else if (size_arr1 <= 0 || size_arr2 <= 0) {
        printf ("Size of array have to greater than zero.\n");
    }
    else {
        int size = size_arr1; // size of two arrays, note: you can declare size = size_arr2 because both size of two arrays are equal.
        int array1[size], array2[size];
        // ask user to input each value of element of array 1
        printf ("Enter value of element of array 1: ");
        for (i = 0; i < size; i++) {
            scanf ("%d", &array1[i]);
        }
        // ask user to input each value of element of array 2
        printf ("Enter value of element of array 2: ");
        for (i = 0; i < size; i++) {
            scanf ("%d", &array2[i]);
        }
        // calculation
        int sum_array[size], sub_array[size];
        for (i = 0; i < size; i++) {
            sum_array[i] = array1[i] + array2[i]; // sum of two arrays
            sub_array[i] = array1[i] - array2[i]; // subtraction of two arrays
        }
        // output of sum
        printf ("The result of sum: {");
        for (i = 0; i < size; i++) {
            printf ("%d, ", sum_array[i]);
        }
        printf ("\b\b}\n");
        // output of subtraction
        printf ("The result of subtraction: {");
        for (i = 0; i < size; i++) {
            printf ("%d, ", sub_array[i]);
        }
        printf ("\b\b}");
    }
    return 0;
}