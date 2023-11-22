#include "header.h"
/*Global variable*/
int a, b, answer;

int main()
{
    /*Function pointer declaration*/
    int (*s)(int, int);
    /*Operation check variable*/
    char operator;

    printf("Enter the operator to calculate for ");
    scanf("%c", &operator);

    while (operator)
    {
    if (operator == '+')
    {
        /*Function pointer assignment/initialization*/
        s = &add;
        /*Macros call from 'header.h' file*/
        PROMPT;
        answer = add(a, b);
        printf("The answer is %d\n", answer);
    }
    else if ( operator == '-')
    {
        s = &minus;
        /*Macros call from 'header.h' file*/
        PROMPT;
        answer = minus(a, b);
        printf("The answer is %d\n", answer);
    }
    else if ( operator == '*')
    {
        s = &times;
        /*Macros call from 'header.h' file*/
        PROMPT;
        answer = times(a, b);
        printf("The answer is %d\n", answer);
    }
    else if ( operator == '/')
    {
        s = &divide;
        /*Macros call from 'header.h' file*/
        PROMPT;
        answer = divide(a, b);
        printf("The answer is %d\n", answer);
    }
    else if ( operator == '%')
    {
        s = &modulos;
        /*Macros call from 'header.h' file*/
        PROMPT;
        answer = modulos(a, b);
        printf("The answer is %d\n", answer);
    }
    else
    {
        printf("The operator you entered is invalid, try again!\n");
        return (1); 
    }
    }
    return (0);
}