#include <stdio.h>

int main() {
    FILE *p = fopen("data.txt", "w");

    int n = 0;

    // to write data
    char ch;
    char d[50];

    while ((ch = getchar()) != EOF && n < 50) { // Limit the number of characters to avoid buffer overflow
        putc(ch, p);
        d[n] = ch;
        n++;
    }

    fclose(p);
    p = fopen("data.txt", "r");

    printf("%d", n);
    
    // to read file data.txt
    int i = 0;
    while ((ch = fgetc(p)) != EOF) {
        d[i] = ch;
        i++;
    }

    // to replace the words

    for (int j = 0; j < n; j++) {
        if (d[j] == 'a' && d[j - 1] == ' ' && d[j + 1] == ' ') {
            d[j] = ' ';
        } else if (d[j] == 't' && d[j - 1] == ' ' && d[j + 1] == 'e' && d[j + 2] == ' ') {
            d[j] = ' ';
            d[j - 1] = ' ';
            d[j + 1] = ' ';
        } else if (d[j] == 'a' && d[j + 1] == 'n' && d[j - 1] == ' ' && d[j + 2] == ' ') {
            d[j] = ' ';
            d[j + 1] = ' ';
        }
    }

    FILE *q = fopen("del.txt", "w");

    for (int j = 0; j < n; j++) {
        fprintf(q, "%c", d[j]);
    }

    fclose(q);
    q = fopen("del.txt", "r");

    printf("\nContent of del.txt after replacing words:\n");

    // Reset file pointer to the beginning of del.txt
    rewind(q);

    while ((ch = fgetc(q)) != EOF) {
        printf("%c", ch);
    }

    fclose(p);
    fclose(q);

    return 0;
}
