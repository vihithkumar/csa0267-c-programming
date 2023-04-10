#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int freq[MAX_SIZE];
    int n, i, j, count;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
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
            if(arr[i] == arr[j])
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

    printf("\nDuplicate elements in the list are: ");
    for(i=0; i<n; i++)
    {
        if(freq[i] > 1)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nNon-duplicate elements in the list are: ");
    for(i=0; i<n; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}


