#include <stdio.h>

void main()
{
    int a[10];
    float arithm_mean;
    int *min, *max, *p;
    int counter = 0, sum = 0, minmax;


    printf("Arithmetic mean without min and max elements.\n");
    printf("Enter the array elements in the one line,\n");
    printf(" 10 numbers and press enter\n -> ");

    p = a;
    for (int i = 1; i <= 10; i++)
        {
            scanf("%i", p++);
            counter++;
        }

    p = a;
    for(int i = 0; i <= 10; i++)
    {
        sum += *p;
        p++;
    }

    max = a;
    min = a;
    p = a + 1;
    for (int i = 2; i <= 10; i++)
    {
        if (*p < *min) min = p;
        if (*p > *max) max = p;
        p++;
    }

    minmax = *min + *max;
    sum -= minmax;
    counter -= 2;
    arithm_mean = (float)sum/counter;

    printf("The min element of the array: %d\n", *min);
    printf("The max element of the array: %d\n", *max);
    printf("Arithmetic mean without max and min elements: %.2f\n", arithm_mean);

}
