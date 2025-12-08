// Write a recursive function to count the digits of an integer number and print the digits.

#include <stdio.h>

int DigitCount(int n)
{
    if (n == 0) return 0;
    return 1 + DigitCount(n / 10);
}

void PrintDigits(int n)
{
    if (n == 0) return;
    PrintDigits(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("-");
        n = -n;
    }

    printf("Digit Count = %d\n",  DigitCount(n));
    printf("Digits : ");
    PrintDigits(n);
    printf("\n");
    
    return 0;
}
