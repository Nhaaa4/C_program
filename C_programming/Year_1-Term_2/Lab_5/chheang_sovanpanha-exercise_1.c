#include <stdio.h>
float find_greatest_number(float num1, float num2);
int main()
{
    float num1, num2;
    float greatest_number;
    printf("Enter 2 real numbers separated by space: ");
    scanf("%f %f", &num1, &num2);
    greatest_number = find_greatest_number(num1, num2);
    printf("The greatest number is %.2f", greatest_number);
}
float find_greatest_number(float num1, float num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}