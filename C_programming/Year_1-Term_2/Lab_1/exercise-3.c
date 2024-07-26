#include <stdio.h>
#include <stdbool.h>
int main () {
    int number[9] = {3, -3, 1, 5, 7, 0, 8, 9, 6};
    int i, search_number;
    bool check = false;
    printf ("Enter a number: ");
    scanf ("%d", &search_number);
    for (i = 0; i < 9; i++) {
        if (search_number == number[i]) {
            printf ("The number %d exists in the array.", number[i]);
            check = true;
        } 
    }
    if (check == false) {
        printf ("The number %d does not exist in the array.", search_number);
    }
    return 0;
}