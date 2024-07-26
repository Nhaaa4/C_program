#include <stdio.h>
void filter(char *str, char c);
int main()
{
    char str[50];
    char c;
    printf("Input string: ");
    gets(str);
    printf("Filter char: ");
    scanf(" %c", &c);
    filter(str, c);
    printf("%s", str);
}
void filter(char *str, char c)
{
    char *ptr = str;
    while (*str != '\0')
    {
        if (*str != c)
        {
            *ptr = *str; // if ptr changes, then str also changes. because I have pointed ptr to str.
            ptr++;
        }
        str++;
    }
    *ptr = '\0'; // the end of string is '\0'
}