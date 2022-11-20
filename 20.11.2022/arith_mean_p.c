#include <stdio.h>

void main()
{
    int a[10];
    float arithm_mean;
    int counter = 0, sum = 0;
    int *p;


    printf("Arithmetic mean of non-zero elements.\n");
    printf("Enter the array elements in the one line,\n");
    printf(" 10 numbers and press enter\n -> ");

    p = a;
    for (int i = 1; i <= 10; i++)
        scanf("%i", p++);

    p = a;
    for (int i = 1; i <= 10; i++)
    {
        if (*p != 0) counter++;
        sum += *p;
        p++;
    }

    arithm_mean = (float)sum/counter;

    printf("The sum of the elements of the array: %d\n", sum);
    printf("Number of non-zero elements: %d\n", counter);
    printf("Arithmetic mean of non-zero elements: %.2f\n", arithm_mean);


}
