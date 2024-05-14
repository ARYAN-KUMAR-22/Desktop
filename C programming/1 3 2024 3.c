// WRITE A PROGRAM TO COUNT NUMBER OF WORDS IN STRING.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("ENTER THE STRING : ");
    gets(str);

    int c = 1;

    for(int i = 0; i<strlen(str); i++)
    {
        if(str[i] == ' ')
        {
                if( ((str[i-1] >= 'A' && str[i-1] <= 'Z') || (str[i-1] >= 'a' && str[i-1] <= 'z')) && ((str[i+1] >= 'A' && str[i+1] <= 'Z') || (str[i+1] >= 'a' && str[i+1] <= 'z')))
                {
                    c++;
                }
        }
    }

    printf("NUMBER OF WORDS IS %d.", c);

    return 0;
}