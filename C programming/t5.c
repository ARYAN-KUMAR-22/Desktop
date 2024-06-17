// WRITE A C PROGRAM TO COUNT THE NUMBER OF WORDS IN A FILE.

#include <stdio.h>

int main()
{
    FILE *p = fopen("words.txt", "w+");

    char ch;

    while( ( ch = getchar()) != EOF)
    {
        putc(ch, p);
    }

    int c = 1;

    rewind(p);

    while( ( ch = getc(p)) != EOF)
    {
        if ( ch == ' ' )
        {
            c++;
        }
    }

    printf("NUMBER OF WORDS ARE %d", c);

    return 0;
}