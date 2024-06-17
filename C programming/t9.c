#include <stdio.h>

int main()
{
    FILE *pFile;
    char c;
    pFile = fopen("sample.txt", "w+");
    for(c = 'A'; c<='E';c++)
    {
        putc(c, pFile);
    }
    fclose(pFile);
    return 0;
}