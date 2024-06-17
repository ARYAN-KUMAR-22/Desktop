// write a c program to input a multiword string and print length of each word.


#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("ENTER THE STRING : ");
    gets(str);

    int length = 0;

    for(int i = 0; i<=strlen(str); i++)
    {
        if(str[i]!=' ' && str[i] != '\n')
        {
            length++;
        }
        else
        {
            if(length>0)
            {
                printf("%d ", length);
                length = 0;
            }
        }
    }

    if(length > 0)
    {
        printf("%d", length);
    }

    printf("\n");

    return 0;
}