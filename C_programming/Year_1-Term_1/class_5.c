#include<stdio.h>
int main()
{
    int i1, i2;
    printf("Input the number 1 = ");
    scanf("%d",&i1);
    printf("Input the number 2 = ");
    scanf("%d",&i2);
    printf("\tAddition = %d\n",i1 + i2);
    printf("\tSubtraction = %d\n",i1 - i2);
    printf("\tMultiplication = %d\n",i1 * i2);
    float div = i1 / i2;
    printf("\tDivision = %.2f\n",div);
    return 0;
}