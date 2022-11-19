#include <stdio.h>

int main()
{
    int mas[5];
    int min = 1000, n;

    printf("Entering an array of integers\n");
    printf("After entering each number, press Enter.\n");

    for (int i = 0; i < 5; i++)
    {
        printf("mas[%d] -> ", i+1);
        scanf("%i", &mas[i]);
        if (mas[i] < min)
        {min = mas[i];
        n = i+1;}
    }

    printf("\nThe minimum element of the array: mas[%d]=%d", n, min);

    return 0;
}
