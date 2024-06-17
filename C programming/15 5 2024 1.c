//wap to input integer into a file and check even and odd numbers and store it into seperate file.

#include <stdio.h>

int main()
{
    int n, num;
    printf("HOW MANY INTEGER YOU WANT TO WRITE : ");
    scanf("%d", &n);

    FILE *p = fopen("odd.txt", "w");
    FILE *q = fopen("even.txt", "w");

    printf("ENTER THE NUMBER : ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &num);

        if(num%2==0)
            fprintf(q, "%d", num);
        else
            fprintf(p, "%d", num);
    }

    return 0;
}