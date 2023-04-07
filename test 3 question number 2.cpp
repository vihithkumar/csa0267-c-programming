#include <stdio.h>
#include <math.h>

int isPrime(int n); 
int isPerfect(int n); 
int isArmstrong(int n); 

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("%d is a prime number\n", num);

    if (isPerfect(num))
        printf("%d is a perfect number\n", num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number\n", num);

    return 0;
}

int isPrime(int n)
{
    if (n <= 1)
        return 0; 

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1; 
}
int isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        return 1; 
    else
        return 0;
}

int isArmstrong(int n)
{
    int sum = 0, temp = n, digit;
    int numDigits = floor(log10(n)) + 1;

    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    if (sum == n)
        return 1; 
    else
        return 0; 
}

