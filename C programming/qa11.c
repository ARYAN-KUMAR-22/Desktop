// write a c program to input variable of different data type and point them using a pointer and point them using pointer and print their size




#include <stdio.h>

int main() {
    int integerVar;
    float floatVar;
    char charVar;
    double doubleVar;

    // Input values
    printf("Enter an integer: ");
    scanf("%d", &integerVar);

    printf("Enter a float: ");
    scanf("%f", &floatVar);

    printf("Enter a character: ");
    scanf(" %c", &charVar);  // Note: space before %c to consume newline

    printf("Enter a double: ");
    scanf("%lf", &doubleVar);

    // Pointers to variables
    int *ptrInteger = &integerVar;
    float *ptrFloat = &floatVar;
    char *ptrChar = &charVar;
    double *ptrDouble = &doubleVar;

    // Printing sizes
    printf("\nSize of integerVar: %zu bytes\n", sizeof(*ptrInteger));
    printf("Size of floatVar: %zu bytes\n", sizeof(*ptrFloat));
    printf("Size of charVar: %zu bytes\n", sizeof(*ptrChar));
    printf("Size of doubleVar: %zu bytes\n\n", sizeof(*ptrDouble));

    return 0;
}
