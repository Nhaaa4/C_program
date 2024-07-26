#include <stdio.h>
#include <stdbool.h>
int main () {
    int i, n;
    printf ("Input the number of Kids: ");
    scanf ("%d", &n);
    int candy[n];
    for (i = 0; i < n; i++) {
        printf ("Input the number of Kid's Candy [%d]: ", i + 1);
        scanf ("%d", &candy[i]);
    }
    int extra_candy;
    printf ("Please, Input extra candy: ");
    scanf ("%d", &extra_candy);
    bool result[n];
    int candy_after_extra[n];
    int greatest_num_candy = candy[0];
    for (i = 0; i < n; i++) {
        candy_after_extra[i] = candy[i] + extra_candy; 
    }
    for (i = 0; i < n; i++) {
        if (candy[i] > greatest_num_candy)
            greatest_num_candy = candy[i];
    }
    for (i = 0; i < n; i++) {
        if (candy_after_extra[i] >= greatest_num_candy ) 
            result[i] = true;
        else 
            result[i] = false;
    }
    for (i = 0; i < n; i++) {
        printf ("%s\t", result[i] ? "true" : "false");
    }
    return 0;
}
