// WAP TO CREATE A FILE CONTAINING INTEGERS AND PRINT THE MULTIPLE OF 3 AND 5.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, in;
    printf("ENTER THE NUMBER OF INTEGER YOU WANT TO WRITE : ");
    scanf("%d", &n);

    FILE * p, * q;
    p = fopen("mo3.txt", "w");
    q = fopen("mo5.txt", "w");

    for( int i = 0; i<n; i++)
    {
        printf("ENTER THE %d INTEGER : ", n);
        scanf("%d\n", &in);

        if(in % 3 == 0)
        {
            fprintf(p, "%d\n", in);
        }
        if(in % 5 == 0)
        {
            fprintf(q, "%d", in);
        }
    }

    return 0;

}