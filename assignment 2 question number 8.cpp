#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE], freq[MAX_SIZE];
    int n, i, j, count;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[j] == arr[i])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("Frequency of all elements in the array:\n");
    for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    return 0;
}
