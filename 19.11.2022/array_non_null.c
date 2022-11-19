#include <stdio.h>

int main()
{
    int mas[5];
    int counter = 0;

    printf("Entering an array of integers\n");
    printf("After entering each number, press Enter.\n");

    for (int i = 0; i < 5; i++)
    {
        printf("mas[%d] -> ", i);
        scanf("%i", &mas[i]);
    }


    for ( int i = 0; i < 5; i++)
    {
        if (mas[i] !=0 )
            counter++;
    }


    printf("\nNumber of non-null elements: %d", counter);

    return 0;
}
