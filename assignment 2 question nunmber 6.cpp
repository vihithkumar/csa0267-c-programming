#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], even_arr[MAX_SIZE], odd_arr[MAX_SIZE];
    int n, i, even_count = 0, odd_count = 0;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even_arr[even_count++] = arr[i];
        }
        else
        {
            odd_arr[odd_count++] = arr[i];
        }
    }

   
    printf("Even elements in the array are:\n");
    for(i=0; i<even_count; i++)
    {
        printf("%d ", even_arr[i]);
    }

    printf("\nOdd elements in the array are:\n");
    for(i=0; i<odd_count; i++)
    {
        printf("%d ", odd_arr[i]);
    }

    return 0;
}
