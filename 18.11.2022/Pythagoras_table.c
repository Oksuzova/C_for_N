#include <stdio.h>

int main()
{
    printf("    ");
    for (int i = 1; i <= 10; i++)
        printf("%3d ", i);
    printf("\n");

    for (int j = 1; j <= 10; j++)
    {
        printf("%3d ", j);
        for (int i = 1; i <= 10; i++)
            printf("%3d ", i*j);
    printf("\n");
    }

    return 0;
}
