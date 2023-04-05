#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE], n, i, largest, second_largest, smallest, second_smallest;
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    second_largest = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }
    smallest = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("The second largest element in the array is: %d\n", second_largest);
    printf("The smallest element in the array is: %d\n", smallest);
    return 0;
}
