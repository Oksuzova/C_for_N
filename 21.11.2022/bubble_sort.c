#include <stdio.h>

void main()
{
    const int len = 10;
    int mas[len];
    int max, tmp, check;


    printf("Bubble sort\n");
    printf("Enter %d numbers.\n", len);

    for (int i = 0; i < len; i++)
    {
        printf(" -> ");
        scanf("%i", &mas[i]);
    }

    for (int i = len-1; i >= 0; i--)
    {
        check = 1;
        for (int j = 0; j < i; j++)
        {
            if (mas[j] < mas[j+1])
            {
                tmp = mas[j];
                mas[j] = mas[j+1];
                mas[j+1] = tmp;
                check = 0;
                }
        }
        if (check == 1)
            break;
    }

    printf("\nSorted array: ");

    for (int i = 0; i < len; i++)
        printf(" %d ", mas[i]);

}

