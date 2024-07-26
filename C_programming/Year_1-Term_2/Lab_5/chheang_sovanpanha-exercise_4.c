#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool found(char string[], char character);
int main()
{
    char string[100], character;
    bool check;
    printf("Enter string: ");
    scanf("%s", string);
    printf("Enter character: ");
    scanf(" %c", &character);
    check = found(string, character);
    if (check == 1)
    {
        printf("The character '%c' have found in string \"%s\".", character, string);
    }
    else
    {
        printf("The character '%c' have not found in string \"%s\".", character, string);
    }
    return 0;
}
bool found(char string[], char character)
{
    bool check = 0;
    for (int i = 0; i < strlen(string); i++) // strlen, this function will find the length of the string, if string have 5 character then it returns 5. 
    {
        if (string[i] == character)
        {
            check = 1;
            break;
        }
    }
    return check;
}
