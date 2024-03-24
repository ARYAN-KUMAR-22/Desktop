// Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

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

    int compare = 0, count=0;
    int result[s];

    for(int i=0; i<s; i++)
    {
        int compare = 0;
        for(int j=0; j<s; j++)
        {
            if(arr[i] > arr[j]){
                compare++;
            }
        }
        
    result[count] = compare;
    count++;
    }

    for( int i=0; i<s; i++)
    {
        printf("%d ", result[i]);
    }
}