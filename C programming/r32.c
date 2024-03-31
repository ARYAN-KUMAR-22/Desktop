/*
    r+ MODE : 
        GIVES SEGMENTATION FAULT IF FILE DOES NOT EXIST
        DO NOT CREATE FILE IF FILE DOES NOT EXIST
        USED FOR READING AND WRITING
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *fp = NULL;

    fp = fopen("r32.txt", "r+");

    fputs("THIS IS TO LEARN FILE HANDLING IN r+ MODE . \n THANK YOU.", fp);

    fclose(fp);

    return 0;
}