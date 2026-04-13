#include <stdio.h>
#include <stdlib.h>

void add()
{
    double a1, a2, answerA;
    printf("Enter the first number:\n");
    scanf("%lf", &a1);
    printf("Enter the second number:\n");
    scanf("%lf", &a2);
    answerA = a1 + a2;
    printf("%lf + %lf = %lf\n", a1, a2, answerA);
}

int main()
{
    char userInput;
    printf("What arithmetic operation would u like to perform? (+)\n");
    scanf(" %c", &userInput);
    if (userInput == '+')
    {
        add();
    }
    else
    {
        printf("Unsupported operation.\n");
    }
    return 0;
}