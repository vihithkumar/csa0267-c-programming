#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i, j, max_freq, freq;
    char max_char;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    max_freq = -1;
    for(i = 0; str[i] != '\0'; i++)
    {
        freq = 1;
        for(j = i+1; str[j] != '\0'; j++)
        {
            if(str[j] == str[i])
            {
                freq++;
            }
        }

        if(freq > max_freq)
        {
            max_freq = freq;
            max_char = str[i];
        }
    }

    printf("Max repeated character in the string = %c\n", max_char);
    printf("It occurs %d times\n", max_freq);

    return 0;
}
