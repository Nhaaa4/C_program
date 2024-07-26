#include <stdio.h>
int main () {
    int r, c, row1, col1, row2, col2;
    // ask user to input size of array 1
    printf ("Enter size of array 1: \n");
    printf ("Enter size of row and column of array 1 (row X col): ");
    scanf ("%d %d", &row1, &col1);
    // ask user to input size of array 2
    printf ("Enter size of array 2: \n");
    printf ("Enter size of row and column of array 2 (row x col): ");
    scanf ("%d %d", &row2, &col2);
    // check if both size of row's arrays or both size of col's arrays are not equal, then It  can not calculation.
    if (row1 != row2 || col1 != col2) {
        printf ("Both size of arrays are different, then It can not calculation\n");
    } 
    // Size of array start from 1
    else if (row1 <= 0 || col1 <= 0 || row2 <=0 || col2 <= 0) {
        printf ("Size of array have to greater than zero.\n");
    }
    else {
        int row = row1, col = col1;// size of two arrays, note: you can declare row = row2, col = col2 because both size of two arrays are equal.
        int array1[row][col], array2[row][col];
        // ask user to input each value of element of array 1
        printf ("Enter value of each element of array 1 (%d x %d): \n", row, col);
        for (r = 0; r < row; r++) {
            for (c = 0; c < col; c++) {
                scanf ("%d", &array1[r][c]);
            }
        } 
        // ask user to input each value of element of array 2
        printf ("Enter value of each element of array 2 (%d x %d): \n", row, col);
        for (r = 0; r < row; r++) {
            for (c = 0; c < col; c++) {
                scanf ("%d", &array2[r][c]);
            }
        } 
        // calculation
        int sum_array[row][col], sub_array[row][col];
        for (r = 0; r < row; r++) {
            for (c = 0; c < col; c++) {
                sum_array[r][c] = array1[r][c] + array2[r][c];
                sub_array[r][c] = array1[r][c] - array2[r][c];
            }
        }
        // output of array 1
        printf ("Element of Array 1: \n");
        for (r = 0; r < row; r++) {
            for (c = 0; c < col; c++) {
                printf ("%5d", array1[r][c]);
            }
            printf ("\n");
        }
        // output of array 2
        printf ("Element of Array 2: \n");
        for (r = 0; r < row; r++) {
            for (c = 0; c < col; c++) {
                printf ("%5d", array2[r][c]);
            }
            printf ("\n");
        }
        // output of addition
        printf ("Result of Sum: \n");
        for (r = 0; r < row; r++) {
            for (c = 0; c < col; c++) {
                printf ("%5d", sum_array[r][c]);
            }
            printf ("\n");
        }
        // output of subtraction
        printf ("Result of Subtraction: \n");
        for (r = 0; r < row; r++) {
            for (c = 0; c < col; c++) {
                printf ("%5d", sub_array[r][c]);
            }
            printf ("\n");
        }
    }
    return 0;
}