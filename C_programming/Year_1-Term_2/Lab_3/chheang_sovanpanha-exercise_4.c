#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void shift_left(char *str, int n);
int main ()
{
    char str[50];
    int n;
    printf("Input string: ");
    gets(str);
    printf("Shift n: ");
    scanf("%d", &n);
    shift_left(str, n);
    printf("Shifted String: %s", str);

}
void shift_left(char *str, int n)
{
    int i;    
    int length = strlen(str); 
    // if n is greater than length, then str is NULL.
    if(n >= length)
    {
        *str = '\0'; 
        return;
    }
    // str start from nth idex becuase we want to shift n left.
    for(i = 0; i < length - n; i++) 
    {
        str[i] = str[i + n];  
    }
    str[length - n] = '\0'; // the end of string is '\0'
}