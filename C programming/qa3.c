// WRITE A C PROGRAM TO CHECK IF A GIVEN 1D ARRAY IS PALLINDROME OR NOT.

#include <stdio.h>

int main()
{
    int s;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &s);

    int arr[s];

    printf("ENTER THE ELEMENTS : ");
    for(int i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }

    int check = 0;

    for(int i=0, j=s-1; i<(s)/2; i++, j--)
    {
        if(arr[i]!=arr[j])
        {
            check++;
            break;
        }
        else
        {
            continue;
        }
    }

    if(check == 0)
        printf("ARRAY IS PALLINDROME.");
    else
        printf("ARRAY IS NOT PALLINDROME.");
}