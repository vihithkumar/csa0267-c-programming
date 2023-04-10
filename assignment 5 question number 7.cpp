#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, num_elements, i;
    int *list;

    
    srand(time(NULL));

    
    printf("Enter A value: ");
    scanf("%d", &a);
    printf("Enter B value: ");
    scanf("%d", &b);
    printf("Enter number of elements: ");
    scanf("%d", &num_elements);

    
    list = (int *)malloc(num_elements * sizeof(int));

    
    for (i = 0; i < num_elements; i++) {
        int rand_num = (rand() % (b - a + 1)) + a;
        list[i] = rand_num;
    }

    
    printf("Random numbers between %d and %d:\n", a, b);
    for (i = 0; i < num_elements; i++) {
        printf("%d\n", list[i]);
    }

    
    free(list);

    return 0;
}

