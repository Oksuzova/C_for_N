#include <stdio.h>

int main()
{
    int mas[5];
    int min = 1000;

    printf("Entering an array of integers\n");
    printf("After entering each number, press Enter.\n");

    int i = 0;

    for (; i < 5; i++)
    {
        printf("mas[%d] -> ", i+1);
        scanf("%i", &mas[i]);
        if (mas[i] < min)
        min = mas[i];

    }

    printf("\nThe minimum element of the array: mas[%d]=%d", i-1, min);

    return 0;
}
