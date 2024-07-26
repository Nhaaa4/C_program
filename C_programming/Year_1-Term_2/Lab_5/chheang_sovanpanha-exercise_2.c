#include <stdio.h>
int summation(int num1, int num2, int num3);
int main()
{
    int num1, num2, num3;
    int result;
    printf("Enter 3 integer numbers sperated by space: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = summation(num1, num2, num3);
    printf("the result of summation: %d", result);
    return 0;
}
int summation(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}