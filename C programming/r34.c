/* 
    a+ MODE IN C :
        READING / APPENDING
        CREATE NEW FILE ( IF FILE DOES NOT EXIST. )
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("r34.txt", "a+");

    fputs("\n THIS IS TO LEARN FILE HANDLING IN a+ MODE \n TEST SUCCESSFULL \n \n THANK YOU.\n", fp);

    rewind(fp);

    while(!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}