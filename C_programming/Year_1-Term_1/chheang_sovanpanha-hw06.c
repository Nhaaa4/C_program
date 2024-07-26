#include <stdio.h>
#include <math.h>
int main () {
    // ^ Practice-Short hand (Ternary Opearater)
    printf("(Practice): Ternary Operater\n");
    int time = 20;
    (time < 18) ? printf("Good day.\n\n") : printf("Good day.\n\n");
    // ^ Homwork 1
    printf("Homework 1 : Program to calculate roots of expression: ax^2 + bx + c = 0\n");
    float a, b, c;
    printf("Enter the number of a, b and c separated by space: ");
    scanf("%f %f %f", &a, &b, &c);
    float delta = b*b - 4*a*c;
    float root1, root2;
    if ( delta > 0 ) {
        root1 = (-b + sqrt (delta)) / 2*a;
        root2 = (-b - sqrt (delta)) / 2*a;
        printf("There are two roots, x1 = %.2f, x2 = %.2f\n\n", root1, root2);
    }else if ( delta == 0) {
        root1 = root2 = -b / 2*a;
        printf("There a root, x1 = x2 = %.2f\n\n", root1);
    }else {
        printf("There is no root.\n\n");
    }
    // ^ Homework 2
    printf("Homework 2 : Show full name of the month by input the number of month.\n");
    int month;
    printf("Input the number of month : ");
    scanf("%d", &month);
    switch(month) {
        case 1:
        printf("The month is January.\n\n");
        break;

        case 2:
        printf("The month is Fabruary.\n\n");
        break;
        
        case 3:
        printf("The month is March.\n\n");
        break;
        
        case 4:
        printf("The month is April.\n\n");
        break;
        
        case 5:
        printf("The month is May.\n\n");
        break;
        
        case 6:
        printf("The month is June.\n\n");
        break;
        
        case 7:
        printf("The month is July.\n\n");
        break;
        
        case 8:
        printf("The month is August.\n\n");
        break;
        
        case 9:
        printf("The month is September.\n\n");
        break;
        
        case 10:
        printf("The month is October.\n\n");
        break;
        
        case 11:
        printf("The month is November.\n\n");
        break;
        
        case 12:
        printf("The month is December.\n\n");
        break;
    }
    return 0;
}