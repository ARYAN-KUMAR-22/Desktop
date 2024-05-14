// WAP TO REAAD CONTENT FROM A FILE.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * p;
    p = fopen("test.txt", "r");
    char ch;

    while(1)
    {
        ch = fgetc(p);
        if(feof(p))
        {
            break;
        }
        else
        {
            printf("%c", ch);
        }
    }
    fclose(p);

    return 0;
}