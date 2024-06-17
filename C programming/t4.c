// WAP TO COUNT VOWEL, CONSONENTS, DIGITS AND SPECIAL CHARACTERS IN A FILE.

#include <stdio.h>

int main()
{
    FILE *p = fopen("words.txt", "w+");

    char ch;

    while((ch = getchar())!=EOF)
    {
        putc(ch, p);
    }

    rewind(p);

    int v = 0, c = 0, d = 0, sc = 0;

    while( (ch = getc(p)) != EOF)
    {
        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            v++;
        }
        else if( ch >= 'a' && ch <= 'z')
        {
            c++;
        }
        else if( ch >= '0' && ch <= '9')
        {
            d++;
        }
        else
        {
            sc++;
        }
    }

    printf("%d\t%d\t%d\t%d", v, c, d, sc-1);    

    return 0;
}