// WAAP TO INPUT N INTEGERS INTO A FILE READ THESE NUMBERS AND IF NUMBERR IS DIVISIBLE BY 5 THEN WRITE SUM OF DIGITS OTHERWISE REVERSE OF NUMBERR INTO TWO SEPERATE FILES.

#include <stdio.h>
#include <stdlib.h> // for malloc

int sum(int num)
{
    int sum = 0;
    while(num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int rev(int num)
{
    int rev = 0;
    while(num != 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main()
{
    int n;
    printf("ENTER THE NUMBER OF INTEGERS YOU WANT TO WRITE: ");
    scanf("%d", &n);

    int *p = (int *)malloc(n * sizeof(int));
    FILE *q = fopen("integers.txt", "w");

    printf("ENTER %d INTEGERS:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    for (int i = 0; i < n; i++)
    {
        if (*(p + i) % 5 == 0)
        {
            fprintf(q, "%d\n", sum(*(p + i)));
        }
        else
        {
            fprintf(q, "%d\n", rev(*(p + i)));
        }
    }

    fclose(q);
    free(p);
    return 0;
}
