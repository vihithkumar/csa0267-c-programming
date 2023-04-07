#include <stdio.h>

int reverseNumber(int n); 
int fibonacci(int n);

int main()
{
    int num, rev;
    printf("Enter an integer: ");
    scanf("%d", &num);

    rev = reverseNumber(num);
    printf("The reversed number is: %d\n", rev);

    printf("Fibonacci series of %d is: ", num);
    for (int i = 0; i <= num; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

int reverseNumber(int n)
{
    int reversed = 0;

    while (n != 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return reversed;
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
