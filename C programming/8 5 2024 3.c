// WAP TO WRITE CONTENTS INTO A FILE.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("ENTER THE NUMBER OF CHARACTER YOU WANT TO WRITE : ");
    scanf("%d", &n);

    FILE * p;
    p = fopen("test.txt", "w");

    char c;
    printf("ENTER THE CHARACTER : ");
    getchar();
    for(int i = 0; i<n; i++)
    {
        scanf("%c", &c);
        fputc(c, p);
    }

    fclose(p);

    return 0;
}