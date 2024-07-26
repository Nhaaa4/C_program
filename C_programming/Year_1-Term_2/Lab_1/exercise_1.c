#include <stdio.h>
int main () {
    int number[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18,20};
    int i, n = sizeof(number) / sizeof(number[0]);
    printf ("Integer NUmber: ");
    for (i = 0; i < n; i++) {
        printf ("%d\t", number[i]);
    } 
    return 0;
}