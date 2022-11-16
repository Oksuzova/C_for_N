#include <stdio.h>

int main ()
{
    float num, sum, arith_mean, max, min;
    int counter;

    printf("Enter the number of numbers of the sequence: \n->");
    scanf("%d", &counter);

    printf("Enter the sequence\nAfter entering every number press enter.\n");

    printf("->");
    scanf("%f", &num);
    sum += num;
    min = num;
    max = num;

    for (int i = 1; i < counter; i++)
    {
        printf("->");
        scanf("%f", &num);

        if (num > max)
            max = num;
        if (num < min)
            min = num;

        sum += num;
    }

    arith_mean = sum / counter;

    printf("Amount of numbers: %d \n", counter);
    printf("Arithmetic meaning: %.2f \n", arith_mean);
    printf("Min number: %.2f \n", min);
    printf("Max number: %.2f \n", max);

    return 0;
}
