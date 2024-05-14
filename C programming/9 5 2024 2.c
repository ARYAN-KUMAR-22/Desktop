// WAP TO CREATE A FILE AND PRINT ALL THE UPPER CASE CHARACTERS.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("ENTER THE NUMBER OF CHARACTER YOU WANT TO WRITE : ");
    scanf("%d",&n);
    char ch;

    FILE *p;
    p = fopen("uc.txt", "w");

    for(int i = 0; i<n; i++)
    {
        printf("ENTER THE %d CHARACTER : ", i);
        scanf("%c", &ch);

        if(ch >= 'A' && ch <= 'Z')
        {
            fprintf(p, "%c\n", ch);
        }
    }

    return 0;
}