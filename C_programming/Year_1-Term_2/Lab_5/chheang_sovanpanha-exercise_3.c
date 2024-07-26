#include <stdio.h>
#include <stdlib.h>
int summation(int n);
int main()
{
    int n;
    int result;
    printf("Enter number of n: ");
    scanf("%d", &n);
    if(n <= 0) 
    {
        printf("Error Input.\nYou should input positive number.\n");
        exit(8);
    }
    result = summation(n);
    printf("The result of summation from 1 to %d: %d\n", n, result);
    return 0;
}
int summation(int n)
{
    if (n > 0)
    {
        return n + summation(n - 1);
    }
    else
    {
        return 0;
    }
}