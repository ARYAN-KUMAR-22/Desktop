// write a program to input an integer of array and print the address of each cell of array.

#include <stdio.h>

int main()
{
    int arr[10];

    printf("ENTER THE ELEMENTS OF ARRAY : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *addr = arr;
    for (int i = 0; i < 10; i++, addr++)
    {
        printf("\n ADDRESS IS : %d \n", addr);
    }

    return 0;
}