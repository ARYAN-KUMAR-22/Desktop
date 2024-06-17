//wap to count no. of vowels consonent digit and special characters in a file.

#include <stdio.h>

int main() {
    int n;
    int v = 0, c = 0, d = 0, sc = 0;
    printf("ENTER THE NUMBER OF CHARACTERS YOU WANT TO ENTER: ");
    scanf("%d", &n);

    char ch;
    FILE *p = fopen("characters.txt", "w");

    printf("ENTER CHARACTERS: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &ch); // Notice the space before %c to consume whitespace characters
        putc(ch, p);
    }
    fclose(p);

    p = fopen("characters.txt", "r");
    while ((ch = fgetc(p)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                v++;
            } else {
                c++;
            }
        } else if (ch >= '0' && ch <= '9') {
            d++;
        } else {
            sc++;
        }
    }
    fclose(p);

    printf("\n\tNUMBER OF VOWELS: %d\n\tNUMBER OF CONSONANTS: %d\n\tNUMBER OF DIGITS: %d\n\tNUMBER OF SPECIAL CHARACTERS: %d\n", v, c, d, sc);

    return 0;
}
