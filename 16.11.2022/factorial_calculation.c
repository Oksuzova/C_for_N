#include <stdio.h>

int main ()
{
    int n, fact = 1;

    printf("Enter the number N whose factorial you want to calculate\n -> ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("Factorial %d is %d", n, fact);

    return 0;
}
