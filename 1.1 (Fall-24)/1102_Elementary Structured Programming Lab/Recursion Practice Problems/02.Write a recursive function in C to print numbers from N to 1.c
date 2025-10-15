// Write a recursive function in C to print numbers from N to 1.

#include <stdio.h>
void printNto1(int n)
{
    if (n == 0) return;
    printf("%d ", n);
    printNto1(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printNto1(n);

    return 0;
}
