#include <stdio.h>
#include <stdlib.h>

typedef struct tuple {
    int num;
    int square;
} Tuple;

int main() {
    int lower, upper, i, size;
    printf("Enter the lower range:");
    scanf("%d", &lower);
    printf("Enter the upper range:");
    scanf("%d", &upper);
    
    size = upper - lower + 1;
    Tuple *arr = (Tuple *)malloc(size * sizeof(Tuple));
    
    for (i = 0; i < size; i++) {
        arr[i].num = lower + i;
        arr[i].square = (lower + i) * (lower + i);
    }
    
    printf("Array of tuples with the first element as the number and second element as the square of the number:\n");
    for (i = 0; i < size; i++) {
        printf("(%d, %d) ", arr[i].num, arr[i].square);
    }
    printf("\n");
    
    free(arr);
    return 0;
}

