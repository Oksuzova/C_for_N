#include <stdio.h>

int main()
{
    int mas[7];
    int sum = 0, arith_mean;

    printf("Entering an array of integers\n");
    printf("After entering each number, press Enter.\n");

    for (int i = 0; i < 7; i++)
    {
        printf("mas[%d] -> ", i);
        scanf("%i", &mas[i]);
    }

    printf("Array: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d   ", mas[i]);
    }

    for ( int i = 0; i < 7; i++)
    {
        sum += mas[i];
    }

    arith_mean = sum/7;

    printf("\nArithmetic mean: %d", arith_mean);

    return 0;
}
