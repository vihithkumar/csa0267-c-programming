#include <stdio.h>

int main() {
    int arr[50];
    int i, j;
    int count = 0;

    // Fill array with values from 1 to 50
    for (i = 0; i < 50; i++) {
        arr[i] = i + 1;
    }

    // Check for composite numbers
    for (i = 0; i < 50; i++) {
        for (j = 2; j <= arr[i]/2; j++) {
            if (arr[i] % j == 0) {
                printf("%d is a composite number\n", arr[i]);
                count++;
                break;
            }
        }
    }

    // Print the total count of composite numbers
    printf("Total composite numbers between 1 to 50: %d", count);

    return 0;
}
