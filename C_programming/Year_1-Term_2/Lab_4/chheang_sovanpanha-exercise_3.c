#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f1, *f2, *f;
    char first_file[50], second_file[50], file[50];
    char text[100];
    printf("Input the first file: ");
    scanf("%s", &first_file);
    f1 = fopen(first_file, "r");
    if (f1 == NULL)
    {
        printf("\"Error opening file.\"\n");
        exit(8);
    }

    printf("Input the second file: ");
    scanf("%s", &second_file);
    f2 = fopen(second_file, "r");
    if (f2 == NULL)
    {
        printf("\"Error opening file.\"\n");
        exit(8);
    }

    printf("Input a file: ");
    scanf("%s", &file);
    f = fopen(file, "w");
    if (f != NULL)
    {
        while (fgets(text, sizeof(text), f1) != NULL)
        {
            printf("%s", text);
            fputs(text, f);
        }
        printf("\n");
        fputs("\n", f);
        while (fgets(text, sizeof(text), f2) != NULL)
        {
            printf("%s", text);
            fputs(text, f);
        }
    }
    else
    {
        printf("\"Error! Opening file.\"");
    }
    fclose(f1);
    fclose(f2);
    fclose(f);
    return 0;
}