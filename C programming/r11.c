// returning string from a fuction

#include <stdio.h>

char *display();

int main()
{
    char *str;
    str = display();
    // str[0] = 'z';
    printf("string is : %s", str);

    return 0;
}

char * display()
{
    char *str = "jenny";
    return str;
}