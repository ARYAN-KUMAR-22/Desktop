#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], substr[100];
    int i, j, found;

    printf("ENTER A STRING : ");
    gets(str);

    printf("ENTER A SUBSTRING TO FIND : ");
    gets(substr);

    for(i = 0; str[i] != '\0'; i++)
    {
        found = 1;
        
        for(j = 0; substr[j] != '\0'; j++)
        {
            if(str[i+j] != substr[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            printf("SUBSTRING FOUND AT INDEX %d", i);
            return 0;
        }

    }

    printf("SUBSTRING NOT FOUND \n");
    return 0;
}