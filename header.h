#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
/*This is the file that contains the operator function*/
#include "operator-function.c"
/**
* This is  a multiple lines macros
* This printf statement will be prompted to the user,
* using scanf to store the user-input in a global variable 'a' and 'b'
* declared in the 'simple-calculator.c' file
*/
#define PROMPT printf("Enter the first operand: "); \
                scanf("%d", &a); \
                printf("Enter the second operand: "); \
                scanf("%d", &b);

#endif