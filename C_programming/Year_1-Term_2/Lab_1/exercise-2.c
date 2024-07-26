#include <stdio.h>
int main () {
    int i, n;
    back:
    printf ("How many name(s): ");
    scanf ("%d", &n);
    if (n <= 0) {
        printf ("Please, Enter number of name again.\n");
        goto back;
    }
    char name[n][50];
    for (i = 0; i < n; i++) {
        printf ("Name %d: ", i + 1);
        scanf ("%s", &name[i]);
    }
    if (n > 1) {
        printf ("Those %d name(s) are: ", n);
        for (i = 0; i < n - 1; i++) {
            printf ("%s, ", name[i]);
        }
        printf ("\b\b and %s.", name[n - 1]);
    } else {
        printf ("This name is %s.", name[n - 1]);
    }
    return 0;
}