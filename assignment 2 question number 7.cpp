#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    // reversing the array
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    int is_palindrome = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[n - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("The array is a palindrome array.");
    } else {
        printf("The array is not a palindrome array.");
    }

    return 0;
}
