#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, octal = 0, digit, i = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    
    while (binary != 0) {
        digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("Decimal equivalent: %d\n", decimal);

    
    i = 1;
    while (decimal != 0) {
        digit = decimal % 8;
        octal += digit * i;
        decimal /= 8;
        i *= 10;
    }

    printf("Octal equivalent: %d\n", octal);

    return 0;
}


