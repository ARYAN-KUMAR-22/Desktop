// WAP TO INPUT TWO STRING AND CHECK IF THEY ARE ANAGRAM OF EACH OTHER.
//    e.g. EARTH, HEARTH

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];

    printf("ENTER FIRST STRING : ");
    gets(str1);

    printf("ENTER SECOND STRING : ");
    gets(str2);

    char temp;
    
    if(strlen(str1) != strlen(str2))
    {
        printf("NOT ANAGRAM");
        return 0;
    }

    for(int i = 0; i<strlen(str1); i++)
    {
        for(int j = 0; j<strlen(str1); j++)
        {
            if (str1[i] < str1[j])
            {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }


    for(int i = 0; i<strlen(str2); i++)
    {
        for(int j = 0; j<strlen(str2); j++)
        {
            if (str2[i] < str2[j])
            {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    int flag = 1;
    for(int i = 0; i<strlen(str1); i++)
    {
        if(str1[i] != str2[i])
        {
            flag = 0;
            break;
        }
    }
    
    if(flag)
    {
        printf("ANAGRAM");
    }
    else
    {
        printf("NOT ANAGRAM");
    }


    return 0;
}