// write a c program to input an alphanumeric string. find and print sum of all digits of that string.

#include <stdio.h>

int main()
{
    char str[100];
    int sum = 0;

    printf("ENTER THE STRING : ");
    gets(str);

    for(int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]>= '0' && str[i]<='9')
        {
            sum += str[i] - '0';
        }
    }

    printf("%d", sum);
}