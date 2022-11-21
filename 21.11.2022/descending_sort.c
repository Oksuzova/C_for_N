#include <stdio.h>

void main()
{
    const int len = 10;
    int mas[len];
    int max, tmp;


    printf("Descending sort\n");
    printf("Enter %d numbers.\n", len);

    for (int i = 0; i < len; i++)
    {
        printf(" -> ");
        scanf("%i", &mas[i]);
    }

    for (int i = 0; i < len-1; i++)
    {
        max = i;
        for (int j = i+1; j < len; j++)
        {
            if (mas[max] < mas[j])
            max = j;
        }

        tmp = mas[i];
        mas[i] = mas[max];
        mas[max] = tmp;
    }

    printf("\nSorted array: ");

    for (int i = 0; i < len; i++)
        printf(" %d ", mas[i]);

}

