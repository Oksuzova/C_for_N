#include <stdio.h>

void main()
{
    int mas[5];
    int i = 0;
    int sample, found = 0;


    printf("Search in an array by iteration\n");
    printf("Please, enter 5 numbers.\n");

    for ( i = 0; i <5; i++)
    {
        printf(" -> ");
        scanf("%i", &mas[i]);
    }

    i = 0;

    do {
        if (mas[i] >= mas[i+1])
            found = 1;
        else
            i++;
    } while (found != 1 && i < 4);

    if (found == 1)
        printf("The sequence is not increasing.\n");
    else
        printf("The sequence is increasing. \n");
}

