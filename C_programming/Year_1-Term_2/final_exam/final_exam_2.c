#include <stdio.h>
#include <string.h>
void RepChar(char *str, char c4r, char cr2);
int main () {
    char string[100];
    char first_char;
    char second_char;

    printf("Input String: ");
    scanf("%[^\n]", &string);
    printf("Input a replaced character from: ");
    scanf(" %c", &first_char);
    printf("Input a replaced character to: ");
    scanf(" %c", &second_char);
    RepChar(string , first_char, second_char);
    printf("(Result) %s", string);
    return 0;
}
void RepChar(char *str, char c4r, char cr2) {
    char *ptr = str;
    while (*str != '\0') {
        if (*str == c4r) {
            *ptr = cr2;
        } 
        else {
            *ptr = *str;
        }
        ptr++;
        str++;
    }
}