#include <stdio.h>

int main ()
{
    float num, sum, arith_mean;
    int counter = 0;

    printf("Processing a sequence of fractional numbers\n");
    printf("After entering every number press enter.");

    for (int i =0; i < 5; i++)
    {
        printf("\n-> ");
        scanf("%f", &num);
        sum += num;
        counter += 1;
        arith_mean = sum / counter;
        printf("Numbers entered: %d. Sum: %.2f. Arithmetic mean: %.2f.", counter, sum, arith_mean);
    }

    return 0;
}
