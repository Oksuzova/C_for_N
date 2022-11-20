#include <stdio.h>

void main()
{
    int mas[5];
    int i = 0;
    int counter = 0, sample;


    printf("Search in an array by iteration\n");
    printf("Please, enter 5 numbers.\n");

    for ( i = 0; i <5; i++)
    {
        printf(" -> ");
        scanf("%i", &mas[i]);
    }

    printf("Enter the number for search\n -> ");
    scanf("%d", &sample);

    i = 0;
    do {
        if (mas[i] == sample)
            counter++;
        i++;
    } while (i <= 5);

        printf("The number occurs in the array %d times.\n", counter);

}

