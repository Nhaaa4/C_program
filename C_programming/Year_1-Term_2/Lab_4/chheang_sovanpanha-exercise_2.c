#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f1, *f2;
    char source_name[50], destination_name[50];
    char string[100];
    printf("Input the source file: ");
    scanf("%s", &source_name);
    f1 = fopen(source_name, "r");
    if (f1 == NULL)
    {
        printf("\"Error! No source file.\"\n");
        exit(8);
    }
    printf("Input the destination file: ");
    scanf("%s", &destination_name);
    if (strcmp(source_name, destination_name) == 0)
    {
        printf("\"Error! same name.\"\n");
        exit(8);
    }
    f2 = fopen(destination_name, "w");
    if (f2 != NULL)
    {
        printf("\n%s\n", destination_name);
        while (fgets(string, sizeof(string), f1) != NULL)
        {
            printf("%s", string);
            fputs(string, f2);
        }
    }
    else
    {
        printf("\"Error! Can not create destination file.\"");
    }
    fclose(f1);
    fclose(f2);
    return 0;
}