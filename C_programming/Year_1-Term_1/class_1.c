#include<stdio.h>
int main()
{
    int byte;
    printf("Input the number of bytes = ");
    scanf("%d",&byte);
    int bit = byte * 8;
    printf("The number of bits that convert from the bytes= %d",bit); 
    return 0;
}