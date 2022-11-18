#include <stdio.h>
#include <time.h>

int main ()
{
    int random;
    float arith_mean;
    time_t t;
    srand((unsigned) time(&t));

    printf("Random integers: \n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            random = rand() % 10+1;
            printf(" %2d ", random);
            arith_mean += random;
        }

    arith_mean = arith_mean/10;
    printf("  Arithmetic mean: %.2f \n", arith_mean);

    }
    return 0;
}
