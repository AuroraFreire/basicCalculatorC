#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LINE_LENGTH 1024

int main()
{
    FILE *filePointer = fopen("input.txt", "r");
    char buffer[LINE_LENGTH];
    int lines = 0, words = 0;
    char lastChar = ' ';
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL)
    {
        lines++;
        for (size_t i = 0; buffer[i] != '\0'; i++)
        {
            char current = buffer[i];
            if (!isspace(current) && isspace(lastChar))
            {
                words++;
            }
            lastChar = current;
        }
    }
    fclose(filePointer);
    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    return 0;
}