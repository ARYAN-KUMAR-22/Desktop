// WAP TO CREATE A FILE AND SAGRIGATE EVEN AND ODD NUMBERS INTO TWO DIFFERENT FILES.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, in;
    printf("ENTER THE NUMBER OF INTEGER YOU WANT TO WRITE : ");
    scanf("%d", &n);

    FILE * p, * q;
    p = fopen("oi.txt", "w");
    q = fopen("ei.txt", "w");

    for( int i = 0; i<n; i++)
    {
        printf("ENTER THE %d INTEGER : ", n);
        scanf("%d\n", &in);

        if(in % 2 == 0)
        {
            fprintf(p, "%d\n", in);
        }
        else
        {
            fprintf(q, "%d", in);
        }
    }

    return 0;

}