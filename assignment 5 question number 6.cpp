#include <stdio.h>
#include <ctype.h>

int main() {
    char statement[] = "Modi Birthday @ September 17, #&$% is the wishes code for him.";
    int special_count = 0;
    int i;

    for (i = 0; statement[i] != '\0'; i++) {
        if (!isalnum(statement[i]) && !isspace(statement[i])) {
            special_count++;
        }
    }

    printf("Number of special characters: %d\n", special_count);

    return 0;
}

