#include <stdio.h>

void main()
{
    int mas[5];
    int i = 0;
    int sample, found = 0, j;


    printf("Search in an array by iteration\n");
    printf("Please, enter 5 numbers.\n");

    for ( i = 0; i <5; i++)
    {
        printf(" -> ");
        scanf("%i", &mas[i]);
    }

    i = 0;
    j = 1;

    do {
        if (mas[i] >= mas[j])
            found = 1;
        else{
            i++;
            j++;}

    } while (found != 1 && j < 5);

    if (found == 1)
        printf("The sequence is not increasing.\n");
    else
        printf("The sequence is increasing. \n");
}

