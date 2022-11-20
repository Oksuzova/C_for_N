#include <stdio.h>

void main()
{
    int mas[5];
    int* p;
    int counter = 0, sample;


    printf("Search in an array by iteration\n");
    printf("Please, enter 5 numbers.\n");

    p = mas;
    for (int i = 0; i < 5; i++)
    {
        printf(" -> ");
        scanf("%i", p++);
    }

    printf("Enter the number for search\n -> ");
    scanf("%d", &sample);

    p = mas;
    for (int i; i <= 5; i++){
       if  (*p == sample)
            counter++;
       p++;
    }

        printf("The number occurs in the array %d times.\n", counter);
}
