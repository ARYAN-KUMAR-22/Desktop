// WAP to input a multiword string and print tnumber of word present in that string.

#include <stdio.h>

int main()
{
    char str[100];

    printf("ENTER THE STRING : ");
    gets(str);

    int in_word = 0, word = 0;

    for(int i = 0; str[i]!= '\0'; i++)
    {
        if(str[i] == ' ')
        {
            in_word = 0;
        }
        if(!in_word)
        {
            in_word = 1;
            word++;
        }
    }

    printf("NUMBER OF WORDS ARE %d", word);
}