#include <stdio.h>

void find_largest(int arr[], int size)
{
    int max1 = arr[0];
    int max2 = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("The first largest value is: %d\n", max1);
    printf("The second largest value is: %d\n", max2);
}

int main()
{
    int arr[] = {10, 5, 20, 15, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    find_largest(arr, size);

    return 0;
}
