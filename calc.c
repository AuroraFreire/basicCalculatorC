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

void subtract()
{
    double s1, s2, answerS;
    printf("Enter the first number:\n");
    scanf("%lf", &s1);
    printf("Enter the second number:\n");
    scanf("%lf", &s2);
    answerS = s1 - s2;
    printf("%lf + %lf = %lf\n", s1, s2, answerS);
}

void multiply()
{
    double m1, m2, answerM;
    printf("Enter the first number:\n");
    scanf("%lf", &m1);
    printf("Enter the second number:\n");
    scanf("%lf", &m2);
    answerM = m1 * m2;
    printf("%lf + %lf = %lf\n", m1, m2, answerM);
}

void divide()
{
    double d1, d2, answerD;
    printf("Enter the first number:\n");
    scanf("%lf", &d1);
    printf("Enter the second number:\n");
    scanf("%lf", &d2);
    answerD = d1 / d2;
    printf("%lf + %lf = %lf\n", d1, d2, answerD);
}

int main()
{
    char userInput;
    printf("What arithmetic operation would u like to perform? (+) (-) (x/*) (/)\n");
    scanf(" %c", &userInput);
    if (userInput == '+')
    {
        add();
    }
    else if (userInput == '-')
    {
        subtract();
    }
    else if (userInput == '*' || userInput == 'x')
    {
        multiply();
    }
    else if (userInput == '/')
    {
        divide();
    }
    else
    {
        printf("Unsupported operation.\n");
    }
    return 0;
}