#include<stdio.h>
int main()
{
    int min, hour;
    printf("Enter the number of minutes = ");
    scanf("%d",&min);
    hour = min / 60;
    min = min % 60;
    printf("The number of hours and mintues is %dh %dmin",hour, min);

    return 0;
}