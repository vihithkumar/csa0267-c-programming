#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], n, i, j, k;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);
 printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n;)
        {
            if(arr[j] == arr[i])
            {
                for(k=j; k<n; k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }


    printf("The array after removing duplicate elements is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
