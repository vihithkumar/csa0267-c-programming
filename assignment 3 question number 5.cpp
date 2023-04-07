#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int num, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("%d = ", num);

    for (int i = 2; i <= num / 2; i++)
    {
        if (isPrime(i))
        {
            if (isPrime(num - i))
            {
                printf("%d + %d  ", i, num - i);
                flag = 1;
            }
        }
    }

    if (flag == 0)
    {
        printf("No combination of prime numbers can add up to %d\n", num);
    }

    return 0;
}
