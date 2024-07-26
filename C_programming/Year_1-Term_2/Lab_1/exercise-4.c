#include <stdio.h>
int main () {
    int i; 
    float score[7];
    printf ("Please, Input 7 scores\n");
    for (i = 0; i < 7; i++) {
        printf ("Socre %d: ", i + 1);
        scanf ("%f", &score[i]);
    }
    float max = score[0];
    float min = score[0];
    for (i = 1; i < 7; i++) {
        if (score[i] > max) {
            max = score[i];
        }
        if (score[i] < min) {
            min = score[i];
        }
    }
    printf ("The maximum value of score is %.2f\n", max);
    printf ("The minimum value of score is %.2f\n", min);
    return 0;
}