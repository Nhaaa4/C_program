#include <stdio.h>
int main () {
    int n; 
    // user input N number
    printf("Enter N number: ");
    scanf("%d", &n);
    int num[n]; // store data is array of num
    int i, j;
    // user input
    printf("Enter %d number separated by space: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    // sort number from biggest to smallest
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (num[i] < num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    // output sort number from biggest to smallest
    printf("Sort number from biggest to smallest\n");
    printf("After sort number: ");
    for (i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}