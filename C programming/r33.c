/* 
    w+ MODE IN FILE HANDLING
        READING / WRITING
        CREATE NEW FILE (IF FILE DO NOT EXIST)
        IF FILE EXIST THEN ERASE THE PREVIOUS CONTENT. THEN REWRITE THE CONTENT

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char ch;

    fp = fopen("r33.txt", "w+");

    fputs(" THIS IS TO LEARN FILE HANDLING IN w+ MODE. \n TEST SUCCESS. \n\n THANK YOU", fp);

    rewind(fp);

    while(!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);
}