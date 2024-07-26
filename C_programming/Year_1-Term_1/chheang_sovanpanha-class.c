#include<stdio.h>
int main()
{
    // ! Ex1
    printf("Exercise1\n");
    int byte;
    printf("Input the number of bytes = ");
    scanf("%d",&byte);
    int bit = byte * 8;
    printf("The number of bits that convert from the bytes= %d\n\n",bit);
    // ! Ex2
    printf("Exercise2\n");
    int ascii;
    printf("Input an ASCII value = ");
    scanf("%d",&ascii);
    printf("Character is %c\n\n",ascii);  
    // ! Ex3
    printf("Exercise3\n");
    int min, hour;
    printf("Enter the number of minutes = ");
    scanf("%d",&min);
    hour = min / 60;
    min = min % 60;
    printf("The number of hours and mintues is %dh %dmin\n\n",hour, min);  
    // ! Ex4
    printf("Exercise4\n");
    int i1, i2;
    printf("Input the first number = ");
    scanf("%d",&i1);
    printf("Input the second number = ");
    scanf("%d",&i2);
    printf("Addition = %d\n",i1 + i2);
    printf("Subtraction = %d\n",i1 - i2);
    printf("Multiplication = %d\n",i1 * i2);
    float div = i1 / i2;
    printf("Division = %.2f\n\n",div);
    // ! Ex5
    printf("Exercise5\n");
    float weight, height;
    printf("Input weight in kilograms: ");
    scanf("%f",&weight);
    printf("Input height in meters: ");
    scanf("%f",&height);
    float bmi = weight / (height * height);
    printf("BMI = %.2f\n\n",bmi);
    // ! Bonus
    printf("(Bonus)\n");
    float r;
    const float pi = 3.14;
    printf("Input the number of radius: ");
    scanf("%f",&r);
    float area = pi * r * r;
    printf("The area of circle: %.2f\n\n",area);
    return 0;
}