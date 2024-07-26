#include <stdio.h>
int main () {
    float score[10], total = 0, average;
    int i;
    printf ("Please, Enter 10 scores.\n");
    for (i = 0; i < 10; i++) {
        printf ("score %d: ", i + 1);
        scanf ("%f", &score[i]);
    }
    for (i = 0; i < 10; i++) {
        total = total + score[i];
    }
    average = total / 10;
    printf ("The average of those scores: %.2f\n", average);
    printf ("The scores that are greater than the average:\n");
    for (i = 0; i < 10; i++) {
        if (score[i] > average) {
            printf ("Score %d: %.2f\n", i + 1, score[i]);
        }
    }
    return 0;
}