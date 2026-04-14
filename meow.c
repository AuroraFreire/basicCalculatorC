#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

#define LINE_LENGTH 1024

int main()
{
    clock_t start = clock();
    char inputWord[100];
    int wordCount = 0;
    printf("What word would u like to look for?\n");
    scanf("%99s", inputWord);
    FILE *filePointer = fopen("input.txt", "r");
    char buffer[LINE_LENGTH];
    int lines = 0, words = 0;
    char lastChar = ' ';
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL)
    {
        lines++;
        char temp[LINE_LENGTH];
        strcpy(temp, buffer);
        char *token = strtok(temp, " \t\n");
        while (token != NULL)
        {
            if (strcmp(token, inputWord) == 0)
            {
                wordCount++;
            }
            token = strtok(NULL, " \t\n");
        }
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
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Time: %f seconds\n", time_spent);
    printf("%s was found %d in this text", inputWord, wordCount);
    return 0;
}