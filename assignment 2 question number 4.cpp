#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], n, i, max_diff;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    max_diff = arr[1] - arr[0];
    for(i=0; i<n-1; i++)
    {
        int diff = arr[i+1] - arr[i];
        if(diff > max_diff)
        {
            max_diff = diff;
        }
    }


    printf("The maximum difference between two elements in the array is: %d\n", max_diff);

    return 0;
}
