#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int n, i, j, temp;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array in descending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
