#include <stdio.h>

void main()
{
    int a[5];
    int *min;
    int *p;


    printf("Searching for the minimal array element.\n");
    printf("Enter the array elements in the one line,\n");
    printf("5 numbers and press enter\n -> ");

    p = a;
    for (int i = 1; i <= 5; i++)
        scanf("%i", p++);

    min = a;
    p = a + 1;

    for (int i = 2; i <= 5; i++)
    {
        if (*p < *min) min = p;
        p++;
    }

    printf("The minimal array element is %d\n", *min);


}
