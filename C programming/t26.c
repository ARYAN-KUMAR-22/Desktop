// Write a program to input a string and delete the inputed character from the string. print the final string.

#include <stdio.h>

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("ENTER THE STRING : ");
    gets(str);

    char ch;
    printf("ENTER THE CHARACTER : ");
    scanf(" %c", &ch); // Added a space before %c to consume any whitespace characters

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (ch == str[i]) {
            for (int j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            len--; // Decrement length after removing a character
            i--; // Recheck current index as it's now replaced
        }
    }

    printf("%s\n", str);

    return 0;
}
