#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f;
    char filename[50];
    printf("Input a file: ");
    scanf("%s", &filename);
    f = fopen(filename, "r");
    char string[100];
    if (f != NULL)
    {
        while (fgets(string, sizeof(string), f) != NULL)
        {
            printf("%s", string);
        }
    }
    else
    {
        printf("\"Error! No file.\"\n");
    }
    fclose(f);
    return 0;
}