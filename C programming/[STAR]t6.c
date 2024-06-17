#include <stdio.h>

int main() {
    FILE *p = fopen("words.txt", "w+");

    char ch;
    int c = 0; 
    int in_word = 0;  

    while ((ch = getchar()) != EOF) {
        putc(ch, p);
    }

    rewind(p);

    while ((ch = getc(p)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            c++;
        }
    }

    printf("NUMBER OF WORDS ARE %d", c);

    fclose(p);
    return 0;
}
