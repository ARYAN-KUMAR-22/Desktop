// WAP TO COPY CONTENT OF ONE FILE TO ANOTHER WITHOUT SPACES

#include <stdio.h>

int main()
{
    char ch;
    FILE *p = fopen("content.txt", "w");
    // to write the content to the file
    while( (ch = getchar() )!=EOF)
    {
        putc(ch, p);
    }

    fclose(p);
    FILE *p1 = fopen("ccontent.txt", "w");
    p = fopen("content.txt", "r");
    rewind(p);

    while( (ch = getc(p))!=EOF)
    {
        if(ch==' ')
        {
            continue;
        }
        else
        {
            putc(ch, p1);
        }
    }

    return 0;

}