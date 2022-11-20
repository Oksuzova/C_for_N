#include <stdio.h>

void main()
{
    int mas[5];
    int i = 0;
    int sample, found = 0;


    printf("Search in an array by iteration\n");
    printf("Please, enter 5 numbers.\n");

    for ( i = 0; i <+5; i++)
    {
        printf(" -> ");
        scanf("%i", &mas[i]);
    }

    printf("\nEnter number for searching: \n");
    scanf("%d", &sample);

    i = 0;
    do {
        if (mas[i] == sample)
            found = 1;
        else
            i++;
    } while (found != 1 && i < 5);

    if (found == 1)
        printf("Match with element number %i\n", i+1);
    else
        printf("No match with sample \n");
}
